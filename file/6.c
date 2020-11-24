#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char str[80];

    fp = fopen("1.txt", "a");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }

    while (strlen(gets(str)) > 0)
    {
        fputs(str, fp);
        fputs("\n", fp);
    }

    fclose(fp);

    return 0;
}