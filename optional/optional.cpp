#include <iostream>
#include <string>
#include <optional>
#include <list>

class Person {
    public:
    std::string name;
    int age;

    Person(const std::string& name, int age) : name(name), age(age) {}
};

std::optional<Person> find_person(const std::list<Person> database, const std::string& name) {
    for (const auto& _person : database) {
        if (_person.name == name) {
            return _person;  // 값을 복사해서 반환
        }
    }
    return std::nullopt;  // 값이 없음을 명시
}

int main() {
    std::list<Person> database = {
        { "Ronaldo", 40 },
        { "Messi", 37 }
    };

    std::optional<Person> result = find_person(database, "Zlatan");

    //result는 Person일 수도, 아닐수도 있겠군!

    if (result) {   //Person이면 알아서 true로 처리!
        std::cout << "Found person: " << result->name << " (" << result->age << ")" << std::endl;
    } 
    else {
        std::cout << "No person found" << std::endl;
    }

    std::cout << result->name << std::endl; //bad_optional_access 예외 throw!

    return 0;

    //result의 소멸자 자동 호출!
}