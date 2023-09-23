#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int *arr;
    int top;
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
void push_element(struct stack *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("Sorry Stack is already Full\n");
    }
    else
    {
        ptr->top=ptr->top+1;
        ptr->arr[ptr->top]=val;
        
    }
}

int peek(struct stack *ptr,int pos)
{
    if(ptr->top-pos+1<0)
    {
        printf("The position is invalid");
        return -1;
    }
    else
    {
        int sol;
        sol=ptr->arr[ptr->top-pos-1];
        printf("The element is : %d",sol);
    }
}

int main()
{
    int sol;
    struct stack*s;
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int*));

    push_element(s,10);
    push_element(s,20);
    push_element(s,30);
    push_element(s,40);
    push_element(s,50);

    if(isEmpty(s))
    {
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }

    if(isFull(s))
    {
        printf("The stack is Full\n");
    }
    else
    {
        printf("The stack is not Full\n");
    }
    printf("Element at Top :\n");
    peek(s,-1);
    printf("Element at the 0 position:\n");
    peek(s,0);
    return(0);
}