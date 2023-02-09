#include<stdio.h>
#include<conio.h>
int is_empty(int top);
int is_full(int top);
int push(int stack[], int ele, int top);
int pop(int stack[], int top);
int i;

void main()
{
    int stack[5],ele,top=-1;
    printf("enter value to store: ");
    scanf("%d",&ele);
    top=push(stack,ele,top);
    printf("%d\t",top);
    printf("enter value to store: ");
    scanf("%d",&ele);
    top=push(stack,ele,top);
    printf("%d\t",top);
    printf("enter value to store: ");
    scanf("%d",&ele);
    top=push(stack,ele,top);
    printf("%d\t",top);
    printf("enter value to store: ");
    scanf("%d",&ele);
    top=push(stack,ele,top);
    printf("%d\t",top);
    printf("enter value to store: ");
    scanf("%d",&ele);
    top=push(stack,ele,top);
    printf("%d\t",top);
    printf("enter value to store: ");
    scanf("%d",&ele);
    top=push(stack,ele,top);
    printf("%d\t",top);
    for(i=0; i<=top; i++)
    {
        printf("%d\t",stack[i]);
    }
    top=pop(stack,top);
    printf("%d",top);
}

int pop(int stack[],int top)
{
    int d;
    if(is_empty(top))
    {
        return 0;
    }
    else{
        d=stack[top];
        top--;
        printf("deleted element %d: ",d);
        return top;
    }
}
int push(int stack[], int ele, int top)
{
    printf("push\t");
    if(is_full(top))
    {
        top++;
        stack[top]=ele;
        return top; 
    }
    else
    {
        return top;
    }

}



int is_empty(int top)
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_full(int top)
{
    if(top<5)
    {
        return 1;
    }
    else{
        return 0;
    }
}