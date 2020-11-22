//********************************************
//File name:0703.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include <stdio.h>

void sort(int n)
{
    int arr[n];
    int i, j, t, min;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            t = arr[min];
            arr[min] = arr[i];
            arr[i] = t;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}

int main(void)
{
    int n;
    printf("Please enter n:\n");
    scanf("%d", &n);
    printf("Please enter:\n");

    sort(n);

    return 0;
}