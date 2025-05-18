#include <iostream>
#include <ctime>
#include <sys/time.h>
#include <cstring>
#include <cstdlib>

int main(int argc, char* argv[]) {
    //argc, argv, hhmmss 형식에 대한 예외처리는 넘어갈게!

    std::string timeStr = argv[1];  // e.g., "12:30:45"

    int hh = std::atoi(std::string(argv[1], 2).c_str());
    int mm = std::atoi(std::string(argv[1]+3, 2).c_str());
    int ss = std::atoi(std::string(argv[1]+6, 2).c_str());

    time_t now = time(NULL);
    struct tm* current_tm = localtime(&now);
    current_tm->tm_hour = hh;
    current_tm->tm_min  = mm;
    current_tm->tm_sec  = ss;

    time_t new_time = mktime(current_tm);

    struct timeval tv;
    tv.tv_sec = new_time;
    tv.tv_usec = 0;

    if (settimeofday(&tv, NULL) != 0) {
        std::cerr << "Failed to execute settimeofday." << std::endl;
        return 1;
    }

    return 0;
}