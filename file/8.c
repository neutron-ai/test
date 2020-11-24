#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int i, num, n[3] = {10, 20, 30};
    float price, total, p[3] = {12.3, 45.6, 78.9};

    fp = fopen("list.dat", "w");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }

    total = 0.0f;
    for (i = 0; i < 3; i++)
    {
        fprintf(fp, "%f,%d\n", p[i], n[i]);
        total = total + p[i] * n[i];
    }
    fprintf(fp, "sum = %f", total);
    fclose(fp);

    fp = fopen("list.dat", "r");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }
    for (i = 0; i < 3; i++)
    {
        fscanf(fp, "%f,%d\n", &price, &num);
        printf("%f %d\n", price, num);
    }
    fscanf(fp, "%f", &total);
    printf("%f", total);

    fclose(fp);

    return 0;
}