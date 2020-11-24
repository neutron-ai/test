#include <stdio.h>

void sort(unsigned char *);

int main(void)
{
    int a = 0x9f8e7b6a;
    unsigned char *p;
    p = (unsigned char *)&a;
    printf("%x,%x,%x,%x\n", *p, *(p + 1), *(p + 2), *(p + 3));
    sort(p);
    printf("%x,%x,%x,%x\n", *p, *(p + 1), *(p + 2), *(p + 3));

    return 0;
}

void sort(unsigned char *s)
{
    unsigned char c;
    c = *(s + 3);
    *(s + 3) = *(s + 0);
    *(s + 0) = c;

    c = *(s + 2);
    *(s + 2) = *(s + 1);
    *(s + 1) = c;
}