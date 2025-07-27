#include <vector>
#include <iostream>

int main() {
    std::vector<bool> v = {true, false, true};
    bool* p = &v[0]; // 컴파일 에러!
    std::swap(v[0], v[1]); // 컴파일 에러!
    
    bool b = v[0]; // 프록시에서 bool로 변환
    std::cout << std::boolalpha << b << '\n';

    std::array<bool, 3> a = {true, false, true};
        //고정 크기일 때 사용
    
    std::vector<uint8_t> v = {1, 0, 1};
        //가변 크기일 때 사용
        //1: true
        //0: false

    return 0;
}