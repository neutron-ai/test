#include <stdio.h>

int main(void)
{
    int a[10], t;
    int *p1 = a, *p2 = a;
    printf("Please enter 10 integers: ");
    for(p1 = a; p1 < a + 10; p1++)
    {
        scanf("%d", p1);
    }

    for (p1 = a; p1 < a + 10; p1++)
    {
        for (p2 = a; p2 < a + 10; p2++)
        {
            if (*p1 < *p2)
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