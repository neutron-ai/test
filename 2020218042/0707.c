//********************************************
//File name:0707.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include <stdio.h>

void change(int n);

int main(void)
{
    int n;
    printf("Please enter n:\n");
    scanf("%d", &n);

    change(n);

    return 0;
}

void change(int n)
{
    int i, j, t;
    int a[n][n];

    printf("Please enter:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
}