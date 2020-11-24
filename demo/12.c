#include <stdio.h>

int main(void)
{
    char a[] = {"abcd"};
    char b[] = {"efgh"};
    char t;
    int i;

    for (i = 0; i < 4; i++)
    {
        t = a[i];
        a[i] = b[i];
        b[i] = t;
    }

    printf("%s", a);

    return 0;
}