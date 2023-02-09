#include<stdio.h>
int a[50];
int i;
int size;
int n;
int pos;
int currentpos=0;
void insertion();
void addeleatpos();
void view();
void update();
void delete();
int main()
{                                           //   1 2 3 4 5 position
    printf("Enter the size of an array: "); //4  0 1 2 3 4 index
    scanf("%d",&size);//                         2 3 4 5
    a[size]; //                                  2 3 4   5
    for(i=0; i<size; i++)//                      2 3   4 5 
    {
       insertion();
    }
    view();
    addeleatpos();
    update();
    delete();
    return 0;
}
void update()
{
    printf("\nEnter the position where you want to update number: ");
    scanf("%d",&pos);
    printf("Enter the number now: ");
    scanf("%d",&n);
    a[pos-1]=n;
    view();
}
void delete()
{
    printf("\nEnter the index to delete: ");
    scanf("%d",&pos);
    for(i=pos; i<=size-1 ; i++)
    {
        a[i-1]=a[i];
    }
    size--;
    view();
}
void addeleatpos()
{
    printf("\nEnter the position where you want to add number: ");
    scanf("%d",&pos);
    printf("Enter the number now: ");
    scanf("%d",&n);
    for(i=size; i>=pos; i--) // 4 3 2
    {
        a[i]=a[i-1];
    }
    a[pos-1]=n;
    size++;
    view();
}
void insertion()
{
    printf("Enter the number that you want to store: ");
    scanf("%d",&n);
    a[currentpos]=n;
    currentpos++;
}

void view()
{
    printf("Array elements ");
    for(i=0; i<size; i++)
    {
        printf("%d\t",a[i]);
    }
}