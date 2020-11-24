#include <stdio.h>
#include <stdlib.h>
struct stu_node
{
    int num;
    float score;
    struct stu_node *next;
};

#define LEN sizeof(struct stu_node)
struct stu_node *create(void)
{
    struct stu_node *p1 = NULL, *p2 = NULL, *head = NULL;
    int n;
    float s;
    printf("Please enter ID and score(exit when input 0):\n");
    scanf("%d%f", &n, &s);
    while (n != 0)
    {
        p1 = (struct stu_node *)malloc(LEN);
        p1->num = n;
        p1->score = s;
        if (head == NULL)
        {
            head = p1;
        }
        else
        {
            p2->next = p1;
        }
        p2 = p1;
        scanf("%d%f", &n, &s);
    }
    p2->next = NULL;
    
    return head;
}

void list(struct stu_node *head)
{
    struct stu_node *p;
    if (head == NULL)
    {
        printf("The linked list is null!\n");
    }
    else
    {
        printf("The information of linked list are as follows:\n");
        p = head;
        while (p != NULL)
        {
            printf("%d,%5.2f\n", p->num, p->score);
            p = p->next;
        }
    }
}

int main(void)
{
    struct stu_node *head;
    head = create();
    list(head);

    return 0;
}