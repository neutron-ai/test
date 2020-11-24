#include <stdio.h>

float mean(int *, int);

int main(void)
{
    int iarr[10];
    int i;
    float ave1;
    printf("Please enter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &iarr[i]);
    }

    ave1 = mean(iarr, 10);
    printf("%f", ave1);

    return 0;
}

float mean(int *data, int n)
{
    float ave2 = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        ave2 += *data;
        data++;
    }
    ave2 /= n;

    return ave2;
}