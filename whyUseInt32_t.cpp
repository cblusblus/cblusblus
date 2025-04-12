#include <iostream>
#include <cstdint>   // for int32_t
#include <climits>   // for CHAR_BIT

int main() {
    std::cout << "Size of int:       " << sizeof(int) * CHAR_BIT << " bits\n";
    std::cout << "Size of long:      " << sizeof(long) * CHAR_BIT << " bits\n";
    std::cout << "Size of int32_t:   " << sizeof(int32_t) * CHAR_BIT << " bits\n";
    return 0;
}