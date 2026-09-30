#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>
#include <vector>

namespace fs = std::filesystem;

std::string sanitizeName(const std::string& input) {
    std::string result;
    for (char ch : input) {
        if (std::isalnum(static_cast<unsigned char>(ch))) {
            result.push_back(ch);
        } else {
            if (result.empty() || result.back() != '-') {
                result.push_back('-');
            }
        }
    }

    while (!result.empty() && result.back() == '-') {
        result.pop_back();
    }

    while (!result.empty() && result.front() == '-') {
        result.erase(result.begin());
    }

    for (char& ch : result) {
        if (ch == ' ') ch = '-';
        if (ch >= 'A' && ch <= 'Z') ch = static_cast<char>(ch + 32);
    }

    if (result.empty()) {
        return "problem";
    }

    std::regex doubleDash("--+");
    result = std::regex_replace(result, doubleDash, "-");

    return result;
}

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

std::string buildTemplate(const std::string& title) {
    std::ostringstream oss;
    oss << "#include <bits/stdc++.h>\n"
        << "using namespace std;\n\n"
        << "int main() {\n"
        << "    ios::sync_with_stdio(false);\n"
        << "    cin.tie(nullptr);\n\n"
        << "    // Problem: " << title << "\n"
        << "    // Write your solution here.\n"
        << "\n"
        << "    return 0;\n"
        << "}\n";
    return oss.str();
}

std::string buildReadme(const std::string& title, const std::string& folderName) {
    std::ostringstream oss;
    oss << "# " << title << "\n\n"
        << "Folder: " << folderName << "\n\n"
        << "## Notes\n"
        << "- This file was generated automatically.\n"
        << "- Add the Codeforces link or a brief description here.\n"
        << "- Keep one solution per file for GitHub practice tracking.\n\n"
        << "## Status\n"
        << "- [ ] Not solved yet\n"
        << "- [ ] Reviewed\n"
        << "- [ ] Accepted\n";
    return oss.str();
}

void writeProblemFiles(const std::string& problemName) {
    std::string clean = sanitizeName(problemName);
    std::string folderName = "CF-" + clean;
    fs::path root = fs::current_path();
    fs::path problemDir = root / "solutions" / folderName;

    fs::create_directories(problemDir);

    std::ofstream mainCpp(problemDir / "main.cpp");
    mainCpp << buildTemplate(problemName);
    mainCpp.close();

    std::ofstream readme(problemDir / "README.md");
    readme << buildReadme(problemName, folderName);
    readme.close();

    std::cout << "Created folder: " << problemDir << "\n";
    std::cout << "Files:\n";
    std::cout << "  - " << (problemDir / "main.cpp") << "\n";
    std::cout << "  - " << (problemDir / "README.md") << "\n";
}

void printUsage() {
    std::cout << "Usage:\n";
    std::cout << "  cf_problem_creator.exe " << "\"Problem Name\"\n";
    std::cout << "Example:\n";
    std::cout << "  cf_problem_creator.exe \"A. Array and Operations\"\n";
    std::cout << "\nOptional environment variables:\n";
    std::cout << "  CODEFORCES_API_KEY\n";
    std::cout << "  CODEFORCES_API_SECRET\n";
    std::cout << "These are kept in local environment variables for API use and never written to source files.\n";
}

int main(int argc, char* argv[]) {
    const char* apiKey = std::getenv("CODEFORCES_API_KEY");
    const char* apiSecret = std::getenv("CODEFORCES_API_SECRET");

    if (apiKey && apiSecret) {
        std::cout << "Codeforces API keys detected in environment variables.\n";
    } else {
        std::cout << "No Codeforces API keys found in environment variables.\n";
        std::cout << "The tool can still create GitHub-ready solution files locally.\n";
    }

    if (argc < 2) {
        printUsage();
        return 0;
    }

    std::string problemName;
    for (int i = 1; i < argc; ++i) {
        if (i > 1) problemName += " ";
        problemName += argv[i];
    }

    problemName = trim(problemName);
    if (problemName.empty()) {
        printUsage();
        return 0;
    }

    writeProblemFiles(problemName);
    return 0;
}
