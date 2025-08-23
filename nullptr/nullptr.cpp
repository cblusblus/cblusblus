#include <iostream>

void func(int) {
    std::cout << "정수 버전 호출됨\n";
}

void func(void*) {
    std::cout << "포인터 버전 호출됨\n";
}

int main() {
    func(0);        // 정수 버전 호출
    func(nullptr);  // 포인터 버전 호출

    return 0;
}