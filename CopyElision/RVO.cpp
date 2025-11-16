#include <iostream>

class MyClass{};

MyClass make() { 
    return MyClass(); 
}

int i = 1'000;

auto inst = make();