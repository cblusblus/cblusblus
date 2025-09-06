#include <iostream>

int example_int(){
    double arr[10]{0,};
    int idx = -1;

    std::cout << arr[idx] << std::endl;
        //컴파일 가능
        //런타임 동작 보장 X
        //  이상한 메모리 참조 또는 세그먼트 폴트

    return 0;
}

int example_uint(){
    double arr[4294967296/*2^32-1*/]{0,};
    unsigned int idx = 0xffffffff;
        //보통 2^32-1
        //저사양 칩셋에서 2^16-1일수도 있음

    std::cout << arr[idx] << std::endl;
        //저사양 칩셋에서 2^16 ~ 2^32-1는 idx로 접근 X

    return 0;
}