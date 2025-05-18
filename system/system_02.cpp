#include <iostream>

int main(){

#ifdef WIN32
    auto ret = system("remove a.out");
#elif defined(__linux__)
    auto ret = system("rm a.out");
#endif

    if (ret != 0){
        std::cout << "system() OK~" << std::endl;
    }
    else{
        std::cout << "system() Not OK. but... why??" << std::endl;
    }

}