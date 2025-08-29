#include <iostream>
#include <optional>
#include <string>

std::optional<std::string> readFile(const std::string& path) {
    if (path == "missing.txt") {
        return std::nullopt; // 오류 처리
    }
    return "file content";   // 정상 반환
}

int main() {
    auto result = readFile("missing.txt");

    if (result) {   //파일이 잘 열린 경우
        
    } 
    else {          //파일이 잘 열리지 않은 경우
        //근데 왜 열리지 않은거야...?
    }
}