#include <string_view>

constexpr std::string str = "ronaldo";
    //컴파일 오류
constexpr std::string_view sv = "messi";
    //OK

