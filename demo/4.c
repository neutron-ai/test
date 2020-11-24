#include<stdio.h>

int main(void)
{
    int a[10], i, j, t;
    printf("Please enter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf(" %d", a[i]);
    }

        return 0;
}