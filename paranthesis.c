#include<stdio.h>
#include<string.h>
int top=-1;
char stack[100];
void push(char);
char ch;
void view();
void pop();
int isempty();
int isfull();
void main()
{
    int i,length;
    char inputstring[100],c;
    gets(inputstring);
    length=strlen(inputstring);
    for(i=0; i<length; i++)
    {
        if(inputstring[i]=='{'|| inputstring[i]=='(')
        {
            c=inputstring[i];
            push(c);
        }
        else if(inputstring[i]=='}'|| inputstring[i]==')')
        {
            pop();
        }

    }
    if(isempty())
    {
        printf("valid paranthesis expression\n");

    }
    else
    {
        printf("Invalid paranthesis expression \n");
    }

}
void push(char ch)
{
    if(isfull())
    {
        printf("Stack is full....!");
    }
    else{
        top=top+1;
        stack[top]=ch;
    }
}

void pop()
{
    if(isempty())
    {
        printf("Stack is empty...!");
    }
    else
    {
        top=top-1;
    }
}
int isempty()
{
   if(top==-1)
    {
        return 1;
    } 
    else{
        return 0;
    }
}

int isfull()
{
      if(top==10-1)
    {
       return 1;
    }
    else{
        return 0;
    }

}

void view()
{ 
    int i;
    for(i=0; i<=top; i++)
    {
        printf("%c\t",stack[i]);
    }
}