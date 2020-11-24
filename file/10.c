#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char filename[50];
    printf("Please enter a filename:\n");
    gets(filename);

    fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }

    fseek(fp, 0, 2);

    printf("len = %ld\n", ftell(fp));
    fclose(fp);

    return 0;
}