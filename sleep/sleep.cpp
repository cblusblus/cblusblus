#include <iostream>
#include <thread>
#include <chrono>
#include <unistd.h>

void with_sleep() {
    std::cout << "[sleep] Start for 1s\n";
    auto start = std::chrono::steady_clock::now();

    sleep(1);

    auto end = std::chrono::steady_clock::now();
    std::cout << "[sleep] Elapsed: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " us\n";
}

void with_sleep_for() {
    std::cout << "[sleep_for] Start for 1s\n";
    auto start = std::chrono::steady_clock::now();

    std::this_thread::sleep_for(std::chrono::seconds(1));

    auto end = std::chrono::steady_clock::now();
    std::cout << "[sleep_for] Elapsed: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " us\n";
}

int main() {
    std::cout << "== Sleep and Yield Demo ==\n";

    with_sleep();
    std::cout << "--------------------------\n";
    with_sleep_for();

    return 0;
}
