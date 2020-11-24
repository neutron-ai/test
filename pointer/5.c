#include <stdio.h>

int max(int, int);
int min(int, int);

int main(void)
{
    int a, b, Max, Min;
    int (*p)(int,int);
    printf("Please enter 2 integers: ");
    scanf("%d%d", &a, &b);

    p = max;
    Max = (*p)(a, b);
    p = min;
    Min = (*p)(a, b);

    printf("Max = %d\n", Max);
    printf("Min = %d", Min);

    return 0;
}

int max(int x, int y)
{
    return x > y ? x : y;
}

int min(int x, int y)
{
    return x > y ? y : x;
}