#include<stdio.h>
int queue[5];
int front=-1;
int rear=-1;
int i;
int ele;
void enqueueR();
void enqueueF();
void dequeueF();
void dequeueR();

void view();
void main()
{
  int choice;
  while(choice!=0){
  printf("\n\nQueue operations:\n");
  printf("1:EnqueueR\n");
  printf("2:DequeueF\n");
  printf("3:EnqueueF\n");
  printf("4:DequeueR\n");
  printf("0:EXIT\n");
 
  printf("Enter your choice: ");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1:
        enqueueR();
        view();
        break;
   case 2:
        dequeueF();
        view();
        break;
    case 3:
        enqueueF();
        view();
        break;
    case 4:
        dequeueR();
        view();
        break;
  }
  }
}

void enqueueR()
{
    printf("Enter element in queue:\n");
    scanf("%d",&ele);
    if(rear==5-1)
    {
        printf("Queue is full...!!");
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=ele;
    }
    else{
        rear=rear+1;
        queue[rear]=ele;
    }
}
void enqueueF()
{
    printf("Enter element in queue:\n");
    scanf("%d",&ele);
    if(front==-1 || front==0)
    {
        printf("Queue is full...!!");  //0 1 2 3  4
    }
    else if(front>0 && front<5-1)
    {
        front=front-1;
        queue[front]=ele;
    }
}


void dequeueF()
{
    if(front==rear)
    {
        
        ele=queue[front];
        front=-1;
        rear=-1;
        printf("queue is empty..");
    }
    else{
        ele=queue[front];
        front=front+1;
    }
}
void dequeueR()
{
    if(front==rear)
    {
        
        ele=queue[rear];
        front=-1;
        rear=-1;
        printf("queue is empty..");
    }
    else{
        ele=queue[rear];
        rear=rear-1;
    }
}

void view()
{ 
    int i;
    for(i=front; i<=rear; i++)
    {
        printf("%d\t",queue[i]);
    }
}