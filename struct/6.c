#include <stdio.h>
#define N 10

struct student 
{
    int score;
};

void count(void)//定义函数
{
    struct student b[N];
    int i, j, t;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &b[i].score);
    }

    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (b[i].score > b[j].score)
            {
                t = b[i].score;
                b[i].score = b[j].score;
                b[j].score = t;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%3d", b[i].score);
    }
}

int main(void)
{
    printf("Please enter the score: ");
    count();

    return 0;
}