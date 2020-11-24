#include <stdio.h>

int max(int, int);             //原型申明后要加分号**********

int main(void)
{
    int a, b, c, Max;
    printf("Please enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    Max = max(a, max(b, c));

    printf("Max = %d", Max);

    return 0;
}

int max(int a, int b)
{
    int z;
    z = a > b ? a : b;

    return z;
}