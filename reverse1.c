#include<Stdio.h>
#include<string.h>
#define MAX 20
char stack[MAX];
int top=-1;
int i=0;
char string[20];
void sview();
void push(int i);
void main()
{
    printf("Enter string: ");
    scanf("%s",string);
    while(string[i]!='\0')
    {
       push(i);
       ++i;
    }
    sview();
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

void sview()
{ 
    int i;
    for(i=top; i>=0; i--)
    {
        printf("%c",stack[i]);
    }
}