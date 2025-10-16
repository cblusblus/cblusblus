#include <iostream>

struct Adder {
    int base; // 상태를 가질 수 있음

    Adder(int value) : base(value) {}

    int operator()(int x) const {
        return base + x;
    }
};

int main() {
    Adder add10(10);
    int x1 = add10(5);  //15

    Adder add5(5);
    int x2 = add5(5);   //10

    return 0;
}