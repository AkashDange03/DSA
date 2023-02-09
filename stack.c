#include<stdio.h>
#define MAX 5
typedef struct stack
{
    int data[MAX];
    int top;
}stack;
int value,d;
void push(stack *);
void pop(stack *);
void view(stack *);
void main()
{
    stack *s;
    stack sp;
    s=&sp;
    s->top=-1;
    int choice=0;
    while(choice!=3)
   {
   printf("-----------------------------------------------------------------");
   printf("\nStack implimention: \n");
   printf("1.insert element\n");
   printf("2.delete element\n");
   printf("3.To exit\n");
   printf("-----------------------------------------------------------------");
   scanf("%d",&choice);
   
   switch(choice)
   {
    case 1:
           push(&sp);
           view(&sp);
           break;
    case 2:
           pop(&sp);
           view(&sp);
           break;
    default:
           printf("System closed");
   }
   }
   printf("\n\n");
}

void push(stack *s)
{
    printf("\nEnter element to insert: \n");
    scanf("%d",&value);
    if(s->top==5-1)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        s->top=s->top+1;
        s->data[s->top]=value;
    }
}

void pop(stack *s)
{
    if(s->top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        d=s->data[s->top];
        printf("deleted element: %d",d);
        s->top=s->top-1;
    }
}

void view(stack *s)
{
    int i;
    for(i=0; i<=s->top; i++)
    {
        printf("%d:%d\t",i,s->data[i]);
    }
    printf("\n\n");
}