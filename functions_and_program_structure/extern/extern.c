#include <stdio.h>
#include "util.h"

// gcc extern.c num.c
int main(void)
{
    printf("%d", Num); // 0
    sayNum(); // 1
}
