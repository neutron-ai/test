#include <stdio.h>

int iMax(int, int);

int main(void)
{
    int a, b, c;
    int (*fun)();
    fun = iMax;
    printf("Please enter 2 integers: ");
    scanf("%d%d", &a, &b);

    c = (*fun)(a, b);
    printf("The Max is %d", c);

    return 0;
}

int iMax(int x, int y)
{
    int z;
    z = x > y ? x : y;

    return z;
}