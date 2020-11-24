#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

typedef struct
{
    char name[12];
    int num;
    float score;
} STUD;

long len = sizeof(STUD);
void save(STUD a[])
{
    FILE *fp;
    fp = fopen("student.dat", "wb");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }
    fwrite(a, len, SIZE, fp);
    fclose(fp);
}

int main(void)
{
    FILE *fp;
    STUD st[SIZE], x;
    int i;
    printf("enter:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("student %d: ", i + 1);
        scanf("%s%d%f", st[i].name, &st[i].num, &st[i].score);
    }
    save(st);

    fp = fopen("student.dat", "rb");
    if (fp == NULL)
    {
        printf("Opening file error!");
        exit(0);
    }

    for (i = 0; i < SIZE; i += 2)
    {
        fread(&x, len, 1, fp);
        printf("student %d: %s, %d, %.2f\n", i + 1, x.name, x.num, x.score);
        fseek(fp, len, 1);
    }
    fclose(fp);

    return 0;
}