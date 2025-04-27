#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    char address[100];
    char gender[10];
} Person;

// 이름을 기준으로 나이와 성별을 반환하는 함수
void get_info(const Person* people, size_t size, const char* name, int* age, char* gender) {
    for (size_t i = 0; i < size; ++i) {
        if (strcmp(people[i].name, name) == 0) {
            *age = people[i].age;
            strcpy(gender, people[i].gender);
            return;  // 값을 찾음
        }
    }
    return;  // 값을 찾지 못함
}

int main() {
    Person people[] = {
        {"Ronaldo", 40, "Saudi", "Male"},
        {"Messi", 37, "Miami", "Male"}
    };
    size_t num_people = sizeof(people) / sizeof(people[0]);

    int age;
    char gender[10];

    //지금 age, gender가 생성되었지만 초기화가 되지 않았는데...
    //조금 불편한데...

    get_info(people, num_people, "Messi", &age, gender);

    printf("Age: %d, Gender: %s\n", age, gender);

    return 0;
}