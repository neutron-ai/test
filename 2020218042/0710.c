//********************************************
//File name:0710.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include <stdio.h>

int *count(char str[80], int *icount);

int main(void)
{
    int icount[4] = {0, 0, 0, 0}, i;
    char str[80];
    printf("Please enter:\n");
    gets(str);

    count(str, icount);
    
    for (i = 0; i < 4; i++)
    {
        printf(" %d", icount[i]);
    }

        return 0;
}

int *count(char str[80], int *icount)
{
    char *s;
    for (s = str; *s; s++)
    {
        if (*s >= 'A' && *s <= 'Z')
        {
            (*icount)++;
        }
        else if (*s >= 'a' && *s <= 'z')
        {
            (*(icount + 1))++;
        }
        else if (*s >= '0' && *s <= '9')
        {
            (*(icount + 2))++;
        }
        else
        {
            (*(icount + 3))++;
        }
    }

    return icount;
}