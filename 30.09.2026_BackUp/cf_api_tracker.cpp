#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

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

std::string sanitizeName(const std::string& input) {
    std::string result;
    for (char ch : input) {
        if (std::isalnum(static_cast<unsigned char>(ch))) {
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
        if (c == ' ') c = '-';
        if (c >= 'A' && c <= 'Z') c = static_cast<char>(c + 32);
    }

    return result.empty() ? "problem" : result;
}

void createProblemFolder(const std::string& problemName) {
    std::string clean = sanitizeName(problemName);
    fs::path root = fs::current_path();
    fs::path dir = root / "solutions" / ("CF-" + clean);
    fs::create_directories(dir);

    std::ofstream mainCpp(dir / "main.cpp");
    mainCpp << "#include <bits/stdc++.h>\n"
            << "using namespace std;\n\n"
            << "int main() {\n"
            << "    ios::sync_with_stdio(false);\n"
            << "    cin.tie(nullptr);\n\n"
            << "    // Problem: " << problemName << "\n"
            << "    // Solve here\n"
            << "    return 0;\n"
            << "}\n";

    std::ofstream readme(dir / "README.md");
    readme << "# " << problemName << "\n\n"
           << "## Goal\n"
           << "- Solve this problem and save a clean accepted solution here.\n\n"
           << "## Status\n"
           << "- [ ] Not solved\n"
           << "- [ ] Reviewed\n"
           << "- [ ] Accepted\n";

    std::cout << "Created: " << dir << "\n";
    std::cout << "Files: main.cpp and README.md\n";
}

int main(int argc, char* argv[]) {
    std::string apiKey = std::getenv("CODEFORCES_API_KEY") ? std::string(std::getenv("CODEFORCES_API_KEY")) : "";
    std::string apiSecret = std::getenv("CODEFORCES_API_SECRET") ? std::string(std::getenv("CODEFORCES_API_SECRET")) : "";

    std::cout << "Codeforces API key loaded: " << (!apiKey.empty() ? "yes" : "no") << "\n";
    std::cout << "Codeforces API secret loaded: " << (!apiSecret.empty() ? "yes" : "no") << "\n";

    if (argc < 2) {
        std::cout << "Usage:\n";
        std::cout << "  cf_api_tracker.exe <codeforces_handle>\n";
        std::cout << "  cf_api_tracker.exe \"tourist\"\n";
        std::cout << "\nYou can also create a practice folder with:\n";
        std::cout << "  cf_api_tracker.exe --create \"A. Array and Operations\"\n";
        return 0;
    }

    std::string arg = argv[1];
    std::string handle = trim(arg);

    if (handle == "--create") {
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

    std::string command = "curl -s \"https://codeforces.com/api/user.info?handles=" + handle + "\"";
    FILE* pipe = _popen(command.c_str(), "r");
    if (!pipe) {
        std::cerr << "Failed to run curl.\n";
        return 1;
    }

    char buffer[8192];
    std::string output;
    while (fgets(buffer, sizeof(buffer), pipe)) {
        output += buffer;
    }

    _pclose(pipe);
    std::cout << output << std::endl;

    return 0;
}
