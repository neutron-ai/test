#include <stdio.h>

int main(void)
{
    int a[8], i, j, t;
    printf("Please enter 8 integers: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 7; i++)
    {
        for (j = i+1; j < 8; j++)
        {
            if(a[j] > a[i])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }

    for (i = 0; i < 8; i++)
    {
        printf(" %d", a[i]);
    }

        return 0;
}