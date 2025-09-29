#include <iostream>
#include <string>
#include <string_view>

void printString(const std::string& s) {
    std::cout << s << '\n';
}

void printView(std::string_view sv) {
    std::cout << sv << '\n';
}

int main() {

    std::string some_long_string = "very very long string"; 

    printString(some_long_string);
        //복사 or 참조 발생

    printView(some_long_string);
        //string의 문자열 데이터 포인터 접근

    // 문자열 리터럴도 그대로 전달 가능
    printView("Hello, world!");

    return 0;
}