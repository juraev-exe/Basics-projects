#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace fs = std::filesystem;

std::string trim(const std::string& s) {
    size_t start = 0;
    while (start < s.size() && std::isspace(static_cast<unsigned char>(s[start]))) {
        ++start;
    }

    size_t end = s.size();
    while (end > start && std::isspace(static_cast<unsigned char>(s[end - 1]))) {
        --end;
    }

    return s.substr(start, end - start);
}

std::vector<std::string> splitWhitespace(const std::string& input) {
    std::vector<std::string> tokens;
    std::stringstream ss(input);
    std::string token;
    while (ss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}

std::string normalizeProblemEntry(const std::string& rawLine) {
    std::string line = trim(rawLine);
    if (line.empty()) return line;

    std::vector<std::string> parts = splitWhitespace(line);
    if (parts.size() >= 2) {
        std::string id = parts[0];
        std::string title;
        for (size_t i = 1; i < parts.size(); ++i) {
            if (i > 1) title += " ";
            title += parts[i];
        }
        return id + " - " + title;
    }

    return line;
}

std::string sanitizeName(const std::string& input) {
    std::string result;
    for (char ch : input) {
        bool isAlphaNum = std::isalnum(static_cast<unsigned char>(ch));
        if (isAlphaNum) {
            result.push_back(ch);
        } else {
            if (!result.empty() && result.back() != '-') {
                result.push_back('-');
            }
        }
    }

    while (!result.empty() && result.back() == '-') result.pop_back();
    while (!result.empty() && result.front() == '-') result.erase(result.begin());

    for (char& c : result) {
        if (c >= 'A' && c <= 'Z') c = static_cast<char>(c + 32);
    }

    if (result.empty()) return "problem";
    return result;
}

std::string makeFolderName(const std::string& problemName) {
    return "CF-" + sanitizeName(problemName);
}

std::string buildMainCpp(const std::string& problemName) {
    std::ostringstream oss;
    oss << "#include <bits/stdc++.h>\n"
        << "using namespace std;\n\n"
        << "int main() {\n"
        << "    ios::sync_with_stdio(false);\n"
        << "    cin.tie(nullptr);\n\n"
        << "    // Problem: " << problemName << "\n"
        << "    // Solve here\n"
        << "\n"
        << "    return 0;\n"
        << "}\n";
    return oss.str();
}

std::string buildReadme(const std::string& problemName) {
    std::ostringstream oss;
    oss << "# " << problemName << "\n\n"
        << "## Goal\n"
        << "- Solve this problem completely.\n"
        << "- Understand the idea, write the algorithm, and verify the proof.\n\n"
        << "## Status\n"
        << "- [ ] Not attempted\n"
        << "- [ ] Idea found\n"
        << "- [ ] Accepted\n\n"
        << "## Notes\n"
        << "- Write key observations, edge cases, and the final approach here.\n";
    return oss.str();
}

void createProgressLogIfMissing() {
    fs::path root = fs::current_path();
    fs::path progress = root / "practice_log.txt";
    if (!fs::exists(progress)) {
        std::ofstream out(progress);
        out << "Codeforces Practice Log\n"
            << "======================\n"
            << "Date | Problem | Status\n";
    }
}

void appendProgressLog(const std::string& problemName, const std::string& status) {
    fs::path root = fs::current_path();
    fs::path progress = root / "practice_log.txt";
    std::ofstream out(progress, std::ios::app);
    out << __DATE__ << " | " << problemName << " | " << status << "\n";
}

void createProblemFolder(const std::string& problemName) {
    std::string folderName = makeFolderName(problemName);
    fs::path root = fs::current_path();
    fs::path dir = root / "solutions" / folderName;

    if (fs::exists(dir)) {
        std::cout << "Folder already exists: " << dir << "\n";
        return;
    }

    fs::create_directories(dir);

    std::ofstream mainCpp(dir / "main.cpp");
    mainCpp << buildMainCpp(problemName);

    std::ofstream readme(dir / "README.md");
    readme << buildReadme(problemName);

    createProgressLogIfMissing();
    appendProgressLog(problemName, "created");

    std::cout << "Created problem folder: " << dir << "\n";
}

std::vector<std::string> readProblemList(const std::string& filePath) {
    std::ifstream in(filePath);
    std::vector<std::string> problems;
    if (!in) {
        std::cerr << "Could not open file: " << filePath << "\n";
        return problems;
    }

    std::string line;
    while (std::getline(in, line)) {
        line = trim(line);
        if (line.empty() || line.rfind("#", 0) == 0) {
            continue;
        }
        problems.push_back(normalizeProblemEntry(line));
    }

    return problems;
}

void printUsage() {
    std::cout << "Usage:\n";
    std::cout << "  cf_auto_practice.exe --create \"A. Array and Operations\"\n";
    std::cout << "  cf_auto_practice.exe --from-file problems.txt\n";
    std::cout << "  cf_auto_practice.exe --from-file problems.txt --status\n";
    std::cout << "\nEnvironment variables:\n";
    std::cout << "  CODEFORCES_API_KEY\n";
    std::cout << "  CODEFORCES_API_SECRET\n";
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printUsage();
        return 0;
    }

    std::string arg1 = argv[1];

    if (arg1 == "--create") {
        if (argc < 3) {
            std::cout << "Please provide a problem name.\n";
            return 0;
        }

        std::string problemName;
        for (int i = 2; i < argc; ++i) {
            if (i > 2) problemName += " ";
            problemName += argv[i];
        }

        createProblemFolder(problemName);
        return 0;
    }

    if (arg1 == "--from-file") {
        if (argc < 3) {
            std::cout << "Please provide a file path with one problem per line.\n";
            return 0;
        }

        std::string filePath = argv[2];
        auto problems = readProblemList(filePath);
        if (problems.empty()) {
            std::cout << "No problems found in file.\n";
            return 0;
        }

        for (const auto& p : problems) {
            createProblemFolder(p);
        }
        return 0;
    }

    if (arg1 == "--status") {
        fs::path root = fs::current_path();
        fs::path log = root / "practice_log.txt";
        if (fs::exists(log)) {
            std::ifstream in(log);
            std::cout << in.rdbuf();
        } else {
            std::cout << "No progress log yet.\n";
        }
        return 0;
    }

    printUsage();
    return 0;
}
