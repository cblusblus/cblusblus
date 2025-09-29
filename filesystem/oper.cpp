#include <iostream>
#include <filesystem>

int main() {
    namespace fs = std::filesystem;

    fs::path base = "project";
    fs::path sub = "src";

    fs::create_directory(base);
        // project 폴더 생성
    fs::create_directory(base / sub);
        // project/src 폴더 생성

    std::cout << "Created: " << (base / sub) << "\n";
    return 0;
}
