#include <stdio.h>

void mul(void);

int main(void)
{
    int i;
    for (i = 1; i < 10; i++)
    {
        printf("第%d次调用函数： ", i);
        mul();
    }

        return 0;
}

void mul(void)
{
    static int b = 1;
    static int x = 1;
    printf("%d\n", x);
    b++;
    x = x * b;
}