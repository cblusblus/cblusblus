#include <cassert>

int foo(int* p){
    assert(p!=nullptr);
        //p가 nullptr이면 안된다는걸 알 수 있음!

    return *p;
}

int main(){
    int* p1;
    foo(p1); //abort 발생!

    int* p2 = new int(0);
    foo(p2); //expect 0

    return 0;
}