#include<stdio.h>
#include<stdlib.H>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

void Push_element(struct stack*ptr,int val)
{
    if(isFull(ptr))
    {
        printf("The stack is Full");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int main()
{
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int*));
   //Pushing an element..
    Push_element(s,10);
     //Check wheather the stack is Empty?
    if(isEmpty(s))
    {
        printf("This stack is empty\n");
    }
    else
    {
        printf("This stack is not empty");
    }
    //Check wheather stack is full or not.
    if(isFull(s))
    {
        printf("The stack is Full");
    }
    else
    {
        printf("The stack is not full");
    }
    

}