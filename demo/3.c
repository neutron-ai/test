#include <stdio.h>

int Max(int a, int b)
{
    int c;
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    return (c);
}

int main(void)
{
    int x, y, z;
    printf("Please enter 2 integers: ");
    scanf("%d%d", &x, &y);

    z = Max(x, y);

    printf("Max = %d", z);

    return 0;
}