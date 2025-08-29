#include <iostream>
#include <string>
#include <cstdint>




enum ErrorCode {
    Success = 0,
    FileNotFound,
    PermissionDenied
};

ErrorCode readFile(const std::string& path) {
    if (path == "missing.txt") {
        return ErrorCode::FileNotFound;
    }
    if (path == "secret.txt") {
        return ErrorCode::PermissionDenied;
    }
    return ErrorCode::Success;
}

int main() {
    ErrorCode result = readFile("test.txt");

    if (result == ErrorCode::FileNotFound) {
        std::cout << "파일 찾을 수 없음!" << std::endl;
    }
    else if (result == ErrorCode::PermissionDenied) {
        std::cout << "권한 거부!" << std::endl;
    }
    else {
        std::cout << "파일 읽기 성공" << std::endl;;
    }

    return 0;
}