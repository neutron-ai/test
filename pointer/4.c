#include <stdio.h>

int *max(int *, int *);

int main(void)
{
    int a, b;
    int *p = NULL;
    printf("Please enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    p = max(&a, &b);
    printf("Max = %d", *p);

    return 0;
}

int *max(int *x, int *y)
{
    return (*x > *y ? x : y);
}