#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    FILE *fp;
    fp = fopen("letter.txt", "w");
    if (fp == NULL)
    {
        printf("\n Opening file error");
        exit(0);
    }
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        fputc(ch, fp);
    }
    fclose(fp);

    return 0;
}