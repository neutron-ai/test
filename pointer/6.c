#include <stdio.h>

int main(int argc,char *argv[])
{
    int i = 0;
    printf("argc = %d\n", argc);
    while (i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }

        return 0;
}