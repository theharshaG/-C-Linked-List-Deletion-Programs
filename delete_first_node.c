#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *second;

    head=malloc(sizeof(struct Node));
    second=malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=NULL;

    struct Node *temp=head;

    head=head->next;

    free(temp);

    while(head!=NULL)
    {
        printf("%d ",head->data);

        head=head->next;
    }

    free(second);

    return 0;
}
