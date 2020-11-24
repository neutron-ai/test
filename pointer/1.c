#include <stdio.h>

int main(void)
{
    int i, *t;
    printf("Please enter a integer: ");
    scanf("%d", &i);

    t = &i;
    printf("%d", *t+1);

    return 0;
}