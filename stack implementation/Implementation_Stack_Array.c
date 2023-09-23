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
        return(0);
    }
    else
    {
        return(0);
    }
}

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

int main()
{
    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=(int*)malloc(s.size*sizeof(int*));

    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int*));

    //Here we check wheather a stack is empty or not...
    if(isEmpty(s))
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }

    //Here we check wheather a stack is full or not...
    if(isFull(s))
    {
        printf("The stack is full\n");
    }
    else{
        printf("The stack is not full\n");
    }
    return(0);
}