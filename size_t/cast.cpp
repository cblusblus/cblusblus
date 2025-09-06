#include <iostream>

int example_bad_cast(){
    double arr[10]{0,};
    int idx = 0;

    int newIdx = idx-1;
    std::cout << arr[newIdx] << std::endl;
        //런타임 에러

    return 0;
}