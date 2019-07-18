#include <stdio.h>

union Person {
    char name[4];
    int age;
};

int main(void) {
    union Person p = {"Bob"};
    p.age = 100;
    printf("%s", p.name);
    printf("%d", p.age);

    return 0;
}