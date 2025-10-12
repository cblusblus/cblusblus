#include <fstream>
#include <iostream>

int main(){
    std::ifstream in("log.txt");

    if (!in.is_open()) {
        std::cerr << "파일이 안 열림!";
    }

    int a;
    in >> a;

    if (in.bad()){
        //하드웨어 오류
    }
    else if (in.fail()){
        //데이터 타입 X
    }
    else if (in.eof()){
        //EOF 도달
    }

    return 0;
}