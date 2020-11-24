#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp_s, *fp_d;
    char ch, sfile[20], dfile[20];

    printf("Please enter the source filename:");
    scanf("%s", sfile);
    printf("Please enter the destination filename:");
    scanf("%s", dfile);

    fp_s = fopen(sfile, "r");
    fp_d = fopen(dfile, "w");

    if (fp_s == NULL)
    {
        printf("can't open file: %s", sfile);
        exit(0);
    }
    if (fp_d == NULL)
    {
        printf("can't open file: %s", dfile);
        exit(0);
    }

    ch = fgetc(fp_s);
    do
    {
        fputc(ch, fp_d);
        ch = fgetc(fp_s);
    } while (ch != EOF);

    fclose(fp_s);
    fclose(fp_d);

    return 0;
}