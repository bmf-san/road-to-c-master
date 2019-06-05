#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        register int num = 1;
        num += 1;
        printf("%d", num);
    }
}