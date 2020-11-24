#include <stdio.h>
#define NUMBER 10

struct student
{
    int num;
    char name[20];
    int count;
};
struct student select[3];

int main(void)
{
    int i, numb;
    for (i = 0; i < 3; i++)
    {
        printf("Please enter the serial number: ");
        scanf("%d", &select[i].num);
        printf("Please enter the name: ");
        scanf("%s", select[i].name);
    }
    select[0].count = 0;
    select[1].count = 0;
    select[2].count = 0;

    for (i = 0; i < NUMBER; i++)
    {
        printf("Please vote in serial number: ");
        scanf("%d", &numb);
        if (numb >= 1 && numb <= 3)
        {
            select[numb - 1].count++;
        }
        else
        {
            printf("Selection error!\n");
            i--;
        }
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%5s: %d", select[i].name, select[i].count);
    }

        return 0;
}