#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, t;
    int *p = NULL;
    float fave;
    printf("Please enter the number of students: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("No enough memory\n");           //分配内存地址失败，输出提示信息并退出程序
        exit(1);
    }
    else
    {
        fave = 0;
        printf("Please enter the score of every student: ");
        for (t = 0; t < n; t++)
        {
            scanf("%d", p + t);
            fave = fave + *(p + t);
        }
        fave /= n;
    }
    printf("Average score is %f", fave);
    free(p);

    return 0;
}