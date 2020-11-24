#include <stdio.h>

void exchange()
{
    int i, j, t;
    printf("Please enter two integers: ");
    scanf("%d%d", &i, &j);

    t = i;
    i = j;
    j = t;
    printf("%d %d", i, j);
}

int main(void)
{
    exchange();
}