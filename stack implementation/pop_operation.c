#include<stdio.h>
#include<stdlib.h>
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

int isFull(struct stack*ptr)
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
//inserting an element into stack.
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
//removing an element from stack.
void Pop_element(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("The stack is Empty\n");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top=ptr->top-1;
        printf("The element popped out is: %d\n",val);
        
    }
}
int main()
{
   
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int*));
    Push_element(s,10);
    Push_element(s,20);
    Push_element(s,30);
    Pop_element(s);
    Pop_element(s);
    Pop_element(s);
    Pop_element(s);


   
    return(0);
}