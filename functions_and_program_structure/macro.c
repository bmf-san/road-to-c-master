#include <stdio.h>
#define TAX 0.08
#define sayTax(num) { printf("%f", num); }

int main(void)
{
    sayTax(TAX);
}