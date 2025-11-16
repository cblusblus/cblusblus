#include <iostream>

class MyClass{int i;};

MyClass good(bool flag) {
    MyClass inst;
    if (flag) {
        inst.set(1);
    } else {
        inst.set(2);
    }
    return inst; //expected NRVO
}

MyClass bad(bool flag) {
    MyClass inst;
    if (flag) {
        inst.set(1);
        return inst;
    } else {
        inst.set(2);
        return inst; 
    }
}