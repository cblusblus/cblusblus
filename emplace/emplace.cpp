#include <iostream>
#include <vector>
#include <string>

class Person {
public:
    int age;
    std::string name;

    Person(int a, const std::string& n) : age(a), name(n) {}

    // 복사 생성자
    Person(const Person& other) : age(other.age), name(other.name) {}

    // 이동 생성자
    Person(Person&& other) noexcept : age(std::move(other.age)), name(std::move(other.name)) {}
};


int main() {
    std::vector<Person> people;
    
    people.emplace_back(43, "Zlatan");  // 복사/이동 없이 생성

    Person p1(40, "Ronaldo");
    people.push_back(p1);  // 복사 발생
    people.push_back(std::move(p1));  //이동 발생
    people.push_back(Person(37, "Messi"));  // 이동 발생 (RVO 없으면)

    return 0;
}