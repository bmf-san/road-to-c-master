#include <stdio.h>

// define enum
enum Status {
    PUBLIC,
    PRIVATE
};

int main() {
    // declaration enum
    enum Status public = PUBLIC;
    enum Status private = PRIVATE;

    printf("%d", public); // 0
    printf("%d", private); // 1
}

