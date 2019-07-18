#include <stdio.h>

typedef struct {
    char name[20];
    int age;
} person;

int main()
{
    person p  = {"Bob", 22};

    printf("%s, %d", p.name, p.age);

    return 0;
}

// Bob, 22