//********************************************
//File name:0708.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include <stdio.h>

int judge(int n);

int main(void)
{
    int n, x = 0;
    printf("Please enter n:\n");
    scanf("%d", &n);

    x = judge(n);
    if (x == 1)
    {
        printf("是对称数组\n");
    }
    else if (x == 0)
    {
        printf("不是对称数组\n");
    }

        return 0;
}

int judge(int n)
{
    int i, j, x;
    int a[n][n];

    printf("Please enter:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    x = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i][j] != a[j][i])
            {
                x = 0;
            }
        }
    }
    return x;
}