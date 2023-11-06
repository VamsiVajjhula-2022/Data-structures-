
#include<stdio.h>
#include<stdlib.h>
//defining the structure with data and next pointer 
struct Node
{
    int data;
    struct Node *next;
};
//method to traverse through the list 
void Traverse(struct Node*ptr)
{
    while(ptr != NULL)
    {
        printf("Element is: %d\n",ptr->data); //taking the data input for the ptr node 
        ptr=ptr->next;  //defining the next pointer value for the ptr node 
    }
}
//method to delete the node at begining 
struct Node *Delete_beg(struct Node *ptr)
{
    struct Node *p=ptr;
    ptr=ptr->next;
    free(p);  //free method to free the memory utilized by the pointer p 
    return ptr;
}
// main method 
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node*)malloc(sizeof(struct Node*));
    second=(struct Node*)malloc(sizeof(struct Node*));
    third=(struct Node*)malloc(sizeof(struct Node*));
    fourth=(struct Node*)malloc(sizeof(struct Node*));

    head->data=10;   //assign the value for head data 
    head->next=second;  //making the head next to move for the second node 

    second->data=20;  //assigning the data for the second node 
    second->next=third;  //making the second next to move for the third node 

    third->data=30;    //assigning the data for the third node 
    third->next=fourth;  //making the third next to move for the fourth node 

    fourth->data=40;  //assigning the data for the fourth node 
    fourth->next=NULL;  //making the fourth next to move for the null(end)

    Traverse(head);  //calling the traverse method with head to print the list 
    head=Delete_beg(head); //deleting the first node of the list 
    printf("After deletion of the first node:\n");
    Traverse(head); //printing the node after the deletion of first node 
    return(0);
}
