#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch;
    fp = fopen("C:\\text\\file8_1.c", "r");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }
    do
    {
        ch = fgetc(fp);
        putchar(ch);
    } while (ch != EOF);

    fclose(fp);

    return 0;
}