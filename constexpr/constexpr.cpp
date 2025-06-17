#define PI 3.14
    //PI는 double인가 float인가...
    //  -> 컴파일러가 알아서 함!

//여기서만 PI를 사용할 수 있다!

#define PI 3.14
double some_function_using_pi(double x) { return x*PI;}
#undef PI   //이 줄 밑으로는 PI를 못쓴다!

#define PI 3.14
//#include "some_library_defining_PI_1.h"
    //여기에도 PI가 정의되어 있다면?
//#include "some_library_defining_PI_2.h"
    //야 너두?

constexpr double pi = 3.14;
    //double이네!

namespace cblusblub {
    constexpr double pi = 3.14;
        //불불이형이 만든 PI!
}

constexpr int square(int x) { return x * x; }
    //x가 컴파일 타임 상수
    //      : square()는 컴파일 타임에 계산!
    //x가 런타임 변수
    //      : square()는 런타임에 계산!(C++14~)

int square_of_4 = square(4);
    //컴파일 타임에 컴파일러가 계산
int square_of_size = square(some_vector.size());
    //런타임에 CPU가 계산

consteval int square_force_runtime(int x) {
    return x * x;
}
    //x가 컴파일 타임 값이 아니면 빌드에러!(C++17~)

int square_of_4 = square_force_runtime(4);
    //컴파일 타임에 컴파일러가 계산
int square_of_size = square_force_runtime(
    some_vector.size()
);
    //컴파일 에러!