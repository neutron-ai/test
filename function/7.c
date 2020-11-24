#include <stdio.h>

void strlower(char *);

int main(void)
{
    char str[80];
    printf("Please enter a string of characters: ");
    gets(str);
    strlower(str);
    puts(str);

    return 0;
}

void strlower(char *p)
{
    while (*p)
    {
        if (*p >= 'A' && *p <= 'Z')
        {
            *p += 32;
        }
        p++;
    }
}