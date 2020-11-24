#include <stdio.h>

int main(void)
{
    int iarr[3][4], i, j, sum;
    int *a[3] = {iarr[0], iarr[1], iarr[2]};
    int **p = NULL;
    p = a;
    printf("Please enter 12 numbers: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &iarr[i][j]);
        }
    }

    sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            sum = sum + *(*(p + i) + j);
        }
    }

    printf("%d", sum);

    return 0;
}