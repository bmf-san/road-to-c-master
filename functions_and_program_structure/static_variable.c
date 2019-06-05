#include <stdio.h>

void count_num();
void count_staticnum();

int main()
{
    int i;
    for (int i = 0; i < 10; i++)
    {
        count_num(); // 1 1 1 1 1 ...
        count_staticnum(); // 1 2 3 4 5 ...
    }
}

void count_num()
{
    int num = 0;

    num++;

    printf("%d \n", num);
}

void count_staticnum()
{
    static int staticNum = 0;

    staticNum++;

    printf("%d \n", staticNum);
}