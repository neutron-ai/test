#include <stdio.h>

void add(void);

int i, iarr[10], sum;
int main(void)
{
    printf("Please enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &iarr[i]);
    }

    add();

    printf("%d", sum);

    return 0;
}

void add(void)
{
    sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum = sum + iarr[i];
    }
}