#include <stdio.h>

int main() {
    int n = 0;

    while(10) {
        n++;
        if (n == 10) {
            printf("%s", "10！");
            break;
        }
    }
}
