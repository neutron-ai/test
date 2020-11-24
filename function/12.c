#include <stdio.h>

void add(void);

int main(void)
{
    int i;
    for (i = 1; i < 4; i++)
    {
        printf("第%d次调用函数", i);
        add();
    }

        return 0;
}

void add(void)
{
    int a;
    a = 1;
    static int b = 1;                   //static后要声明变量的类型
    printf("a = %d, b = %d\n", a, b);
    b++;
}