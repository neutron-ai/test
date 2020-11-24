#include <stdio.h>

struct student
{
    int num;
    char name[20];
    int score;
    char ID[10];
};


int main(void)
{
    struct student *p, s[5];
    p = s;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Please enter the serial number: ");
        scanf("%d", &s[i].num);
        printf("Please enter the name: ");
        scanf("%s", s[i].name);
        printf("Please enter the score: ");
        scanf("%d", &s[i].score);
        printf("Please enter the student ID: ");
        scanf("%s", s[i].ID);
    }

    for (p = s; p < s + 5; p++)
    {
        printf("%d %s %d %s\n", p->num, p->name, p->score, p->ID);
    }

        return 0;
}