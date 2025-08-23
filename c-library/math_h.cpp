#include <math.h>
#include <stdio.h>

int main()
{
    double d = sqrt(4);     
        // OK
    int i = sqrt(4);
        // 타입 변환 경고 없음 (암묵적 변환)

    return 0;
}