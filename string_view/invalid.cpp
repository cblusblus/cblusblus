#include <string_view>
#include <string>

std::string_view sv = "Hello";
sv[0] = 'h';
    // 컴파일 에러(string_view는 수정 X)

std::string_view makeView() {
    std::string temp = "Temporary string";
    return temp;
        //temp는 함수 끝나면 파괴되고,
        //string_view가 참조할 데이터가 없어짐
}