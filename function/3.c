#include <stdio.h>

void add(void);

int a, b, c;
int main(void)
{
    scanf("%d%d", &a, &b);

    add();

    printf("%d", c);

    return 0;
}

void add(void)
{
    c = a + b;
}