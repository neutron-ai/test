//********************************************
//File name:0704.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include <stdio.h>
#include <math.h>

int judge(int n)
{
    int i, z;
    i = 2;
    z = (int)sqrt(n);
    while (i <= z)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    int n, x;

    printf("100~200 素数为：\n");
    for (n = 101; n < 200; n++)
    {
        x = judge(n);
        if (x)
        {
            printf(" %d", n);
        }
    }

    return 0;
}