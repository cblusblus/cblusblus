#include <iostream>
#include <stdexcept>

void foo(){
    boo();
}

void boo(){
    throw std::runtime_error("boo");
}

int main(){
    try{
        foo();
    }
    catch{
        //...
    }
}