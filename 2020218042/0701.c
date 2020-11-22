//********************************************
//File name:0701.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include <stdio.h>
int seek(int x, int y)
{
    int i, max, z;
    z = x < y ? x : y;
    max = 0;
    for (i = 1; i <= z; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            max = i;
        }
    }

    return max;
}

int main(void)
{
    int x, y, Max;
    printf("Please enter 2 integers: ");
    scanf("%d%d", &x, &y);

    Max = seek(x, y);

    printf("The greatest common divisor is: %d", Max);

    return 0;
}