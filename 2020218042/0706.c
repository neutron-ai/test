//********************************************
//File name:0706.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include <stdio.h>

int fun(int n, int *p1, int *p2);

int main(void)
{
    int n, p1, p2, x = 0;
    printf("Please enter: ");
    scanf("%d", &n);
    fun(n, &p1, &p2);

    if (x == 0)
    {
        printf("%d %d", p1, p2);
    }
    else if (x == 1)
    {
        printf("error!\n");
    }

    return 0;
}

int fun(int n, int *p1, int *p2)
{
    int a, b, x;
    int b0, b1, b2, b3;
    b3 = n / 1000;
    b2 = (n - b3 * 1000) / 100;
    b1 = (n - b3 * 1000 - b2 * 100) / 10;
    b0 = n % 10;

    if (b3 == 0 || b2 == 0 || b1 == 0 || b0 == 0)
    {
        x = 1;
    }
    else
    {
        a = b3 + b2 * 10;
        *p1 = a;
        b = b1 + b0 * 10;
        *p2 = b;

        x = 0;
    }
    return x;
}