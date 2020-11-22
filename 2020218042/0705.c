//********************************************
//File name:0705.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include <stdio.h>
#include <stdlib.h>

char swap(void)
{
    char str[80];
    char *p = NULL;
    p = str;
    int n;
    gets(str);

    if (*p != '0')
    {
        printf("不是八进制！\n");
        exit(1);
    }
    else
    {
        n = 0;
        for (p = str; *p; p++)
        {
            n = n * 8 + *p - '0';
        }
    }
    
    return n;
}

int main(void)
{
    int m;
    printf("请输入八进制数：\n");

    m = swap();

    printf("对应的十进制数为：%d", m);

    return 0;
}
        