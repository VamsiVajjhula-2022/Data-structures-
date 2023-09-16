#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traverse(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Element: %d \n",ptr->data);
        ptr=ptr->next;
    }
    
}

struct Node *InsertBeg(struct Node *ptr,int data)
{
    struct Node *p;
    p=(struct Node *)malloc(sizeof(struct Node*));
    p->data=data;
    p->next=ptr;
    return p;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node *)malloc(sizeof(struct Node*));
    second=(struct Node*)malloc(sizeof(struct Node*));
    third=(struct Node*)malloc(sizeof(struct Node*));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

   
    Traverse(head);
    head=InsertBeg(head,50);
    printf("After insertion of element in the beginning:\n");
    Traverse(head);
    return(0);
}