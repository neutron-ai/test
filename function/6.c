#include <stdio.h>

void mean(void);

int iarr[10], i;
float ave;
int main(void)
{
    printf("Please enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &iarr[i]);
    }

    mean();
    printf("%f", ave);

    return 0;
}

void mean(void)
{
    int *p;
    p = iarr;

    for (i = 0; i < 10; i++)
    {
        ave += *p++;
    }
    ave /= 10;
}