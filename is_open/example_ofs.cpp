#include <fstream>
#include <iostream>

int main(){
    std::ofstream out("log.txt");

    if (!out.is_open()) {
        std::cerr << "파일이 안 열림!";
    }

    out << "hello" << std::endl;

    if (!out.good()) {
        //fail, eof, bad 모두 확인
        std::cerr << "오류 발생!";
    }

    return 0;
}