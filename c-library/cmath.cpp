#include <cmath>
#include <iostream>

int main()
{
    double d = std::sqrt(4);
        // OK
    int i = std::sqrt(4);
        // 컴파일 에러

    return 0;
}