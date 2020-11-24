#include <stdio.h>

int main(void)
{
    int a[10], i, t;
    int *p1 = a, *p2 = a;
    printf("Please enter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (p1 = a; p1 < a + 9; p1++)
    {
        for (p2 = p1 + 1; p2 < a + 10; p2++)
        {
            if (*p1 > *p2)
            {
                t = *p1;
                *p1 = *p2;
                *p2 = t;
            }
        }
    }

    for (p1 = a; p1 < a + 10; p1++)
    {
        printf(" %d", *p1);
    }

        return 0;
}