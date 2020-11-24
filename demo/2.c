#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char str[80];
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a'&& str[i] <= 'z')
        {
            str[i] = (str[i] - 'a' + 2) % 26 + 'a';
        }
        else if(str[i] >= 'A'&& str[i] <= 'Z')
        {
            str[i] = (str[i] - 'A' + 2) % 26 + 'A';
        }
    }

    puts(str);

    return 0;
}