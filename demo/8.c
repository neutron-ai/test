#include <stdio.h>

int main(void)
{
    int n, i, x;
    for (n = 10; n < 1000; n++)
    {
        x = n;
        for (i = 1; i <= 4; i++)
        {
            n = 4 * (n - 1) / 5;
            if ((n-1) % 5 != 0)
            {
                break;
            }
        }
        if ((n - 1) % 5 == 0)
        {
            printf("y=%d\n", x);
            break;
        }
    }
        return 0;
}