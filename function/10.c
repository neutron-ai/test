#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(void)
{
    int a, b, Add, Sub;
    int (*fun1)(), (*fun2)();
    fun1 = add;
    fun2 = sub;
    printf("Please enter 2 integers: ");
    scanf("%d%d", &a, &b);

    Add = (*fun1)(a,b);
    Sub = (*fun2)(a, b);

    printf("Add = %d\n", Add);
    printf("Sub = %d\n", Sub);

    return 0;
}

int add(int x, int y)
{
    int z;
    z = x + y;

    return z;
}

int sub(int x, int y)
{
    int z;
    z = x - y;

    return z;
}