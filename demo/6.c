#include <stdio.h>

int main(void)
{
    int a, b = 0, i = 0, t, j;
    printf("Please enter an integer: ");
    scanf("%d", &a);
    j = a;

    while (j > 0)
    {
        
        if (j % 10 == 0)
        {
            j = j / 10;
            printf("0");
        }
        for (i = 1; i <= 1000000000; i *= 10)
    {
        if ((a / (i * 10)) == 0)
        {
            t = i;
            while (a != 0)
            {
                b = b + ((a % 10) * t);
                a = (a - (a % 10)) / 10;
                t = t / 10;
            }
        }
    }
    }
    printf("%d", b);
        return 0;
}