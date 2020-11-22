//********************************************
//File name:0702.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include <stdio.h>

char seek(void)
{
    char str[80];
    char *p = NULL;
    p = str;
    int num;
    gets(str);

    num = 0;
    for (p = str; *p; p++)
    {
        if (*p >= '0' && *p <= '9')
        {
            num++;
        }
    }

    return num;
}

int main(void)
{
    int number;
    printf("Please enter a string of characters:\n");

    number = seek();

    printf("%d", number);

    return 0;
}