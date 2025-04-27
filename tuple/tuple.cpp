#include <iostream>
#include <string>
#include <list>
#include <tuple>

using namespace std;

class Person {
public:
    string name;
    int age;
    string address;
    string gender;

    Person(string name, int age, string address, string gender)
        : name(name), age(age), address(address), gender(gender) {}
};

// 이름을 기준으로 나이와 성별을 반환하는 함수
tuple<int, string> get_info(const list<Person>& people, const string& name) {
    for (const auto& person : people) {
        if (person.name == name) {
            return make_tuple(person.age, person.gender);
        }
    }
    return {0,""};  //이름이 없을 때
}

int main() {
    list<Person> people = {
        Person("Ronaldo", 40, "Saudi", "Male"),
        Person("Messi", 37, "Miami", "Male")
    };

    auto [age, gender] = get_info(people, "Messi");

    cout << "Age: " << age << ", Gender: " << gender << endl;

    return 0;
}

#include <tuple>

int main(){
    tuple<int, double, string> t{1, 2.0, "hello"};

    return 0;
}