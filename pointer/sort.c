#include <stdio.h>

int main(void)
{
    int a[10], i, t;
    int *p1 = a, *p = a;
    printf("Enter: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (p = a; p < a + 9; p++)
    {
        for (p1 = p + 1; p1 < a + 10; p1++)
        {
            if (*p > *p1)
            {
                t = *p;
                *p = *p1;
                *p1 = t;
            }
        }
    }

    for (p = a; p < a + 10; p++)
    {
        printf("%d", *p);
    }

    return 0;
}