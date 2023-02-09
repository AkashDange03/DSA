#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* insertatbeg(struct node* head,int data)
{
   struct  node *ptr=(struct node*)malloc(sizeof(struct node));
   ptr->next=head;
   ptr->data=data;
   return ptr;
}
struct node* insertatend(struct node* head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p;
    p=head;
    ptr->data=data;
    while(p!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
void main()
{ 
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *ptr;
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));

  head->data=7;
  head->next=second;

  second->data=8;
  second->next=third;

  third->data=9;
  third->next=NULL;

  //head=insertatbeg(head,56);
  head=insertatend(head,70);
  ptr=head;
  while(ptr!=NULL)
  {
    printf("element: %d\n",ptr->data);
    ptr=ptr->next;
  }
 
    
}