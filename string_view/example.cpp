#include <iostream>
#include <string>
#include <string_view>

void printView(std::string_view sv) {
    std::cout << sv << '\n';
}

int main() {
    std::string s = "string";
    const char* cstr = "char*";

    printView(s);
        // std::string 참조
    printView(cstr);
        // C 문자열 참조
    printView("Charlie");
        // 문자열 리터럴 참조

    return 0;
}