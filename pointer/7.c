#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = NULL;
    p = (int *)malloc(sizeof(int));
    *p = 100;
    printf("%d\n", *p);
    free(p);

    return 0;
}