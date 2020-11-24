#include <stdio.h>
#define N 10

struct student
{
    int score;
};

int count(struct student x[])
{
    int i, n;
    n = 0;
    for (i = 0; i < N; i++)
    {
        if (x[i].score < 60)
        {
            n++;
        }
    }

    return n;
}

int main(void)
{
    int num, i;
    struct student st[N];
    printf("Please enter 10 scores: ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &st[i].score);
    }

    num = count(st);
    printf("%d", num);

    return 0;
}