#include <stdio.h>

void recursive(int num);

int main(void)
{
    recursive(5); // 5 6 7 8 9
}

void recursive(int num)
{
    if (num == 10)
    {
       return; 
    }

    printf("%d", num);

    num++;

    recursive(num);
}