#include <time.h>
#include <iostream>

int main(){
    //system("date");
    time_t current_time = time(NULL);

    //예외처리 1
    if (current_time == ((time_t)-1)) {
        std::cout << "time() fail!" << std::endl;
        return 1;
    }

    const char* str = ctime(&current_time);

    //예외처리 2
    if (str == NULL) {
        std::cout << "str empty!" << std::endl;
        return 2;
    }

    std::cout << str << std::endl;

    return 0;
}