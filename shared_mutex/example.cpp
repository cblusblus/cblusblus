#include <iostream>
#include <shared_mutex>
#include <thread>
#include <vector>
#include <mutex>

std::shared_mutex rw_lock;
int shared_data = 0;

void reader(int id) {
    std::shared_lock lock(rw_lock); // 여러 reader 동시 허용
}

void writer(int id) {
    std::unique_lock lock(rw_lock); // writer는 단독 진입
    shared_data += 1;
}

int main() {
    std::vector<std::thread> threads;

    // 여러 reader와 writer 생성
    for (int i = 0; i < 3; i++) threads.emplace_back(reader, i);
    for (int i = 0; i < 2; i++) threads.emplace_back(writer, i);

    for (auto& t : threads) t.join();
}
