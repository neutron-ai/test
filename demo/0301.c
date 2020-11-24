#include <stdio.h>

void sort()
{
    int arr[10], i, j, tmp, min;
    printf("Please enter some integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

        for (i = 0; i < 9; i++)
        {
            min = i;
            for (j = i + 1; j < 10; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            if (min != i)
            {
                tmp = arr[i];
                arr[i] = arr[min];
                arr[min] = tmp;
            }
        }

        for (i = 0; i < 10; i++)
        {
            printf(" %d", arr[i]);
    }
}

int main(void)
{
    sort();
}