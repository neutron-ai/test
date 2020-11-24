#include <stdio.h>
#include <string.h>

char *lstchar(char *, char);        //原型声明，返回一个指针

int main(void)
{
    char str[80], c, *p;
    printf("Please enter a string of characters: ");
    gets(str);
    printf("Please enter a character: ");
    scanf("%c", &c);

    p = lstchar(str, c);
    if (p == NULL)
    {
        printf("Char %c not found!", c);
    }
    else
    {
        printf("The position is %d", (int)(p - str));
    }

        return 0;
}

char *lstchar(char *s, char ch)
{
    char *chp = NULL;
    while (*s)
    {
        if (*s == ch)
        {
            chp = s;
            break;
        }
        else
        {
            s++;
        }
    }

    return chp;
}