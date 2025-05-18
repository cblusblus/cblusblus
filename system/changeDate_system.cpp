#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    //argc, argv, hhmmss 형식에 대한 예외처리는 넘어갈게!

    std::string timeStr = argv[1];  // e.g., "12:30:45"
    std::string cmd = "date -s \"" + timeStr + "\"";

    int result = system(cmd.c_str());
    if (result != 0) {
        std::cerr << "Failed to execute system command." << std::endl;
    }

    return result;
}