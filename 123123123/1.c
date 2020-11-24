#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void)
{
    int i, j, flag = 0;
    double  duration;
    clock_t start, finish;
    start = clock();
    int x = 5;
    int y = 10;
    char input;
    int isFire = 0;

    while (1)
    {
        system("cls");
        if (isFire == 0)
        {
            for (i = 0; i < x; i++)
            {
                printf("\n");
            }
        }
        else
        {
            for (i = 0; i < x; i++)
            {
                for (j = 0; j < y; j++)
                {
                    printf(" ");
                }
                printf("  |\n");
            }
        }
            for (i = 0; i < x; i++)
            {
                printf("\n");
            }
        for (j = 0; j < y; j++)
        {
            printf(" ");
        }
        printf("  *\n");
        for (j = 0; j < y; j++)
        {
            printf(" ");
        }
        printf("*****\n");
        for (j = 0; j < y; j++)
        {
            printf(" ");
        }
        printf(" * * \n");

        if (kbhit())
        {
            input = getch();
            if (input == 'a')
            {
                y--;
            }
            if (input == 'd')
            {
                y++;
            }
            if (input == 'w')
            {
                x--;
            }
            if (input == 's')
            {
                x++;
            }
            if (input == ' ')
            {
                isFire = 1;
            }
            if (input == 'b')
            {
                break;
            }
        }
        
    }
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("列优先用时： %.2f seconds\n", duration);
}