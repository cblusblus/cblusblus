#include <iostream>
#include <filesystem>


int main() {
    
    namespace fs = std::filesystem;
    fs::path dirname = "project";
    if (fs::create_directory(dirname)) {
        std::cout << "Created: " << dirname << "\n";
    } else {
        std::cout << "Already exists: " << dirname << "\n";
    }

    return 0;
}