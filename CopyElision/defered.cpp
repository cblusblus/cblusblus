#include <iostream>

class MyClass{};

MyClass make() { 
    return MyClass(); 
        // prvalue : MyClass()로 객체를 초기화하는 식 자체
        // C++17~
}

MyClass inst = make();
    //make()에서 만든 prvalue MyClass를
    //  inst에 대입할 때 객체가 생성

        

           // prvalue : MyClass()로 만든 임시 객체
        // ~C++14