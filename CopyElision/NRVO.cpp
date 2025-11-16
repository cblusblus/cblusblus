#include <iostream>

class MyClass{};

MyClass make() { 
    MyClass a; 
    return a; 
}

auto inst = make();