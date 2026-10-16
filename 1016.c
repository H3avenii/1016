#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main ()
{
    struct Node *head;
    struct Node *second;
    head=malloc(sizeof(struct Node));
    second=malloc(sizeof(struct Node));
    if (head==NULL)
    {
        printf("無效");
        return 1;
    }
    head->data=20;
    second->data=30;
    head->next=second;
    second->next=NULL;
    
    printf("First Node : %d\n", head->data);
    printf("Second Node : %d\n", second->data);
    free(second);
    return 0;
}