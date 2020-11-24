#include <stdio.h>

void sort()
{
    int iarr[10];
    int i, j, t, min;
    printf("Please enter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &iarr[i]);
    }

    for (i = 0; i < 9; i++)
    {
        min = i;
        for (j = i + 1; j < 10; j++)
        {
            if (iarr[j] < iarr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            t = iarr[min];
            iarr[min] = iarr[i];
            iarr[i] = t;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf(" %d", iarr[i]);
    }
}

int main(void)
{
    sort();
}