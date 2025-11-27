#include <array>

std::array<int, 5> arr = {5,4,3,2,1};
std::sort(arr.begin(), arr.end());

std::array<int, 5> a;               // 스택
auto* p = new std::array<int, 5>(); // 힙

struct Header {
    std::array<uint8_t, 20> bytes;
};

using Matrix3x3 = std::array<std::array<float, 3>, 3>;

Matrix3x3 m = {{
    {1.f, 0.f, 0.f},
    {0.f, 1.f, 0.f},
    {0.f, 0.f, 1.f}
}};

arr[5];     //접근
arr.at(5);  //접근 + 예외처리