#include <vector>

std::vector<int> v = {1,2,3};
v.push_back(4);
v.emplace_back(5);

std::vector<int> a;               // a는 스택, 원소는 힙
auto* p = new std::vector<int>(); // p와 원소 모두 힙

v[10];     //접근
v.at(10);  //접근 + 예외처리

std::vector<uint8_t> v;
v.push_back('h');
v.push_back('i');
send(sock, v.data(), v.size(), 0);

std::vector<int> v;
v.reserve(1000);
for (int i = 0; i < 1000; i++) v.push_back(i);