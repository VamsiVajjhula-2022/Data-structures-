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

void Stack_Top(struct stack *ptr)
{
    printf("The element in the top of stack: %d\n",ptr->top);
}
void Stack_Bottom(struct stack *ptr)
{
    printf("The element in the botton of stack: %d\n",ptr->arr[0]);
}
int main()
{
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int*));

    if(isEmpty(s))
    {
        printf("The stack is Empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }

    if(isFull(s))
    {
        printf("The stack is Full \n");
    }
    else
    {
        printf("The stack is Not Full\n");
    }
    Stack_Top(s);
    Stack_Bottom(s);
    return(0);
}