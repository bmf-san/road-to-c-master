#include <stdio.h>

int main(void) {
    struct Detail
    {
        int i;
        double d;
        char c;
    };

    struct Person
    {
        int i;
        double d;
        char c;
        struct Detail detail;
    }person;

    person.i = 1;
    person.d = 1.2;
    person.c = 'a';
    person.detail.i = 2;
    person.detail.d = 2.2;
    person.detail.c = 'b';

    printf("%d %f %c\n", person.i, person.d, person.c);
    printf("%d %f %c\n", person.detail.i, person.detail.d, person.detail.c);
}

