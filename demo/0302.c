#include <stdio.h>

void num()
{
    int i, j;
    for (i = 2; i < 20000; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >= i)
        {
            printf(" %d", i);
        }
    }
}

int main(void)
{
    num();
}