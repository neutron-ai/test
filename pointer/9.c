#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j, t;
    int *p = NULL;
    printf("Please enter the number of numbers: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("No enough memory!");
    }
       
    printf("Please enter some numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                t = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = t;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf(" %d", *(p + i));
    }

    free(p);

    return 0;
}