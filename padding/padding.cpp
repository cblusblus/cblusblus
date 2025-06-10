#include <iostream>

struct PaddedStruct {
    char a;   // 1 byte
              // 3 bytes padding
    int b;    // 4 bytes
};

#pragma pack(push, 1)   //패딩 제거
struct UnpaddedStruct {
    char a;   // 1 byte
    int b;    // 4 bytes (no padding)
    double c; // 8 bytes (no padding)
};
#pragma pack(pop)


int main() {
    std::cout << "Size of Padded Struct: " 
        << sizeof(PaddedStruct) << " bytes\n";
    std::cout << "Size of Unpadded Struct: "
        << sizeof(UnpaddedStruct) << " bytes\n";

    return 0;
}