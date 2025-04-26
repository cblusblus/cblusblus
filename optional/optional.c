#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

const Person* find_person(const Person* database, size_t size, const char* name) {
    for (size_t i=0; i<size; ++i){
        if (strcmp(database[i].name, name) == 0){
            return &database[i];
        }
    }
    return NULL;  // 값을 찾지 못함
}

int main() {
    const Person database[2] = {
        {"Ronaldo",40},
        {"Messi", 37}
    };

    const Person* result = find_person(database, 2, "Zlatan");

    //result은 다음 중 무엇인가?(3점)
    //  1. NULL
    //  2. 포인터
    //  3. 배열

    if (result != NULL) {
        printf("Found person: %s (%d)\n", result->name, result->age);
    } 
    else {
        printf("No person found\n");
    }

    return 0;
}