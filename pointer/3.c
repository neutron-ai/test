#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[5][20], t[20];
    char(*p)[20], (*q)[20];
    printf("Please enter 5 names: ");
    for (p = name; p < name + 5; p++)
    {
        gets((char *)p);
    }

    for (p = name; p < name + 4; p++)
    {
        for (q = p + 1; q < name + 5; q++)
        {
            if (strcmp((char *)p, (char *)q) > 0)
            {
                strcpy(t, (char *)p);
                strcpy((char *)p, (char *)q);
                strcpy((char *)q, t);
            }
        }
    }

    printf("The sorted names are:\n");
    for (p = name; p < name + 5; p++)
    {
        puts((char *)p);
    }

        return 0;
}