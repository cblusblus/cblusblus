#include <iostream>

int main() {
    int x = 10;
    int y = 20;

    auto copyLambda = [=]() {
        //x, y 모두 복사
        x += 5;    //컴파일 오류
        return x + 5;
    };

    auto copyLambdaWithMutable = [=]() mutable {
        //x, y 모두 복사
        x += 5;    //원본 x가 바뀜
        return x + 5;
    };

    auto refLambda = [&]() {
        //x, y 모두 참조
        y += 5;     // 원본 y가 바뀜
        return y;
    };
}