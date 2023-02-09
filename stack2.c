#include<Stdio.h>
int stack[5];
int top=-1;
int ele;
//char string[]={"Akash"};
void view();
void push(int);
void pop();
void main()
{
  //int choice;
 /* while(choice!=0){
  printf("\n\nStack operations:\n");
  printf("1:PUSH\n");
  printf("2:POP\n");
  printf("0:EXIT\n");
 
  printf("Enter your choice: ");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1:
        push();
        view();
        break;
   case 2:
        pop();
        view();
        break;
  }
  }*/
  push(2);
  push(3);
  push(4);
  push(5);
  view();
  pop();
  printf("After element poped: ");
  view();

}

void push(int ele)
{
    /*printf("Enter an element to insert: \n");
    scanf("%d",&ele);*/
    if(top==5-1)
    {
        printf("Stack is full....!");
    }
    else{
        top=top+1;
        stack[top]=ele;
    }
}

void pop()
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
}

void view()
{ 
    int i;
    for(i=0; i<=top; i++)
    {
        printf("%d\t",stack[i]);
    }
}