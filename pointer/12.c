#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j, tmp;
    int *p = NULL;
    printf("Please enter the number of students: ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));

    printf("Please enter the scores of %d students: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                tmp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = tmp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf(" %d", *(p + i));
    }

        return 0;
}