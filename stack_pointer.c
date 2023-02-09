#include<stdio.h>
#include<conio.h>
typedef struct stack{
    int arr[5];
    int top;
}stack;
int is_empty(stack *s);
int is_full(stack *s);
int push(stack *s,int value);
int pop(stack *s);
void init(stack *s);
int i;

void main()
{
    struct stack s;
    int value;
    init(&s);
    for(i=0; i<=5; i++)
    {
        if(is_empty(&s))
        {
            printf("enter value to store: ");
            scanf("%d",&value);
            push(&s,value); 
        }
        else
        {
            if(is_full(&s))
            {
                printf("stack is full");
            }
        }
    }
   
}

void init(stack *s)
{
    s->top=-1;
}
int pop(stack *s)
{
        int d;
        d=s->arr[s->top];
         s->top-=1;
        printf("deleted element %d: ",d);
        return 0;
}
int push(stack *s,int value)
{
        s->top+=1;
        s->arr[s->top]=value;
        return 1; 
}



int is_empty(stack *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_full(stack *s)
{
    if(s->top>5)
    {
        return 1;
    }
    else{
        return 0;
    }
}