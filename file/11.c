#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch, filename[20];
    int n = 0;

    printf("Please enter a filename:\n");
    gets(filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }

    while (!feof(fp))
    {
        ch = fgetc(fp);
        putchar(ch);
        n++;
    }

    printf("Number = %d\n", n);
    fclose(fp);

    return 0;
}