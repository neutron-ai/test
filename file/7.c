#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int n, i;
    fp = fopen("int_file.dat", "wb");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }
    printf("Please enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        fwrite(&n, 4, 1, fp);
    }
    fclose(fp);

    fp = fopen("int_file.dat", "rb");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }
    for (i = 0; i < 10; i++)
    {
        fread(&n, 4, 1, fp);
        printf("%d", n);
    }
    fclose(fp);

    return 0;
}