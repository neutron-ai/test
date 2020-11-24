#include <stdio.h>
#include <string.h>

struct date
{
    int year;
    int month;
    int day;
};

struct student
{
    char number[16];
    char name[12];
    struct date birthday;
    int score;
};

int main(void)
{
    struct student a;
    strcpy(a.number, "123456");
    strcpy(a.name, "XXX");
    a.birthday.year = 2000;
    a.birthday.month = 01;
    a.birthday.day = 12;
    a.score = 100;

    printf("Student ID: %s\n", a.number);
    printf("Name: %s\n", a.name);
    printf("birthdate: %d.%d.%d\n", a.birthday.year, a.birthday.month, a.birthday.day);
    printf("Score: %d", a.score);

    return 0;
}