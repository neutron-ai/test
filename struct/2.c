#include <stdio.h>

struct student
{
    char number[16];
    char name[12];
    int age;
    int score[3];
};

int main(void)
{
    struct student st;
    int i, sum;
    printf("Please enter the ID of this student: ");
    scanf("%s", st.number);
    printf("Please the name of this student: ");
    scanf("%s", st.name);
    printf("Please enter the age of this student: ");
    scanf("%d", &st.age);
    printf("Please enter grades in 3 courses: ");
    for (i = 0, sum = 0; i < 3; i++)
    {
        scanf("%d", &st.score[i]);
        sum = sum + st.score[i];
    }

    printf("Student ID: %s\n", st.number);
    printf("Name: %s\n", st.name);
    printf("Age: %d\n", st.age);
    printf("Total points: %d\n", sum);

    return 0;
}