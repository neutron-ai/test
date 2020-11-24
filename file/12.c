#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch;

    fp = fopen("newfile.txt", "w");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }

    ch = fgetc(fp);
    if (ferror(fp))
    {
        printf("Error reading!\n");
        clearerr(fp);
    }
    if (!ferror(fp))
    {
        printf("Error indicator cleared!\n");
    }
    fclose(fp);

    return 0;
}