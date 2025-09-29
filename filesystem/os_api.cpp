#include <iostream>
#include <string>

#ifdef _WIN32
    #include <windows.h>
#else
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <cstring>   // strerror
    #include <errno.h>
#endif

bool create_directory_cross(const std::string& dirname) {
#ifdef _WIN32
    if (CreateDirectory(dirname.c_str(), NULL)) {
        return true;
    } else {
        //예외처리
    }
#else
    if (mkdir(dirname.c_str(), 0755) == 0) {
        return true;
    } else {
        //예외처리
        return false;
    }
#endif
}
