#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define MAX 5
typedef struct queue
{
	int data[MAX];
	int F,R;
}queue;
void display(queue *q);
void init(queue *q);
int empty(queue *q);
int full(queue *q);
void enqueue(queue *q,int x);
int dequeue(queue *q);

void main()
{
	int x,ch,n,i;
	queue q;
	init(&q);
	do
	{
		printf("1-create\n2-Insert\n3-delete\n4-display\n5-exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter no of elements ");
				scanf("%d",&n);
				printf("enter the value");
				for(i=1;i<=n;i++)
				{
					scanf("%d",&x);
					if(full(&q))
					{
						printf("queue is full");
					}
					else
					{
						enqueue(&q,x);
					}
				}
				break;
			case 2:
				printf("enter a number");
				scanf("%d",&x);
				if(full(&q))
				{
					printf("queue is full");
				}
				else
				{
					enqueue(&q,x);
				}
				break;
		case 3:
			if(empty(&q))
			{
				printf("queue is empty");
			}
			else
			{
				x=dequeue(&q);
				printf("deleted data=%d",x);
			}
			break;
		case 4:
			display(&q);
			break;
		}
	}while(ch!=5);
	getch();
}
void init(queue *q)
{
	q->F=q->R=-1;
}
int empty(queue *q)
{
	if(q->R==-1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
int full(queue *q)
{
	if((q->R+1)%MAX==q->F)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void enqueue(queue *q,int x)
{
	if(q->R==-1)
	{
		q->F=q->R=0;
		q->data[q->R]=x;
	}
	else
	{
		q->R=(q->R+1)%MAX;
		q->data[q->R]=x;
	}
}
int dequeue(queue *q)
{
	int x;
	x=q->data[q->F];
	if(q->F==q->R)
	{
		q->F=q->R=-1;
	}
	else
	{
		q->F=(q->F+1)%MAX; 
	}
	return(x);
}
void display(queue *q)
{
	int i;
	i=q->F;
	while(i!=q->R)
	{
		printf("%d->",q->data[i]);
		i=(i+1)%MAX;
	}
	printf("%d",q->data[i]);
}	