#include <iostream>

int main() {
    int offset = 5;

    auto add = [offset](int value) {
        //내부에 offset이 복사
        return value + offset;
    };

    int x3 = add(10);
}