#include<Stdio.h>
#include<string.h>
#define MAX 20
char stack[MAX];
int top=-1;
int length=0;
char ele;
int i=0;
char string[20];
char reverse[20];
void sview();
void rview();
void push(int i);
char pop();
void main()
{
    printf("Enter string: ");
    scanf("%s",string);
    length=strlen(string);
    while(string[i]!='\0')
    {
       push(i);
       ++i;
    }
    sview();
    i=0;
    while(top!=-1)
    {
        reverse[i]=pop();
        i++;
    }
    rview();
}

void push(int i)
{
   
    if(top==MAX-1)
    {
        printf("Stack is full....!");
    }
    else{
        top=top+1;
        stack[top]=string[i];
    }
}

char pop()
{
    if(top==-1)
    {
        printf("Stack is empty...!");
    }
    else
    {
        ele=stack[top];
        top=top-1;
    }
    return ele;
}

void sview()
{ 
    int i;
    for(i=0; i<=top; i++)
    {
        printf("%c",stack[i]);
    }
}

void rview()
{ 
    int i;
    printf("\nReverse String\n");
    for(i=0; i<=length; i++)
    {
        printf("%c",reverse[i]);
    }
}