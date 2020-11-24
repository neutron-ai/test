#include <stdio.h>

int max(int a, int b)
{
    int z;
    z = a > b ? a : b;
    return z;
}

int main(void)
{
    int a, b, Max;
    printf("Please enter 2 integers: ");
    scanf("%d%d", &a, &b);
    Max = max(a, b);
    printf("%d", Max);

    return 0;
}