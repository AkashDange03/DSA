#include<stdio.h>
int choice;
int a[20];
int size;
int i,value;
void view();

int main()
{
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    a[size];
    printf("Enter array element: ");
    for(i=0; i<size; i++)
    {
       scanf("%d",&value);
       a[i]=value;
    }
    printf("Enter number to find: ");
    scanf("%d",&choice);
    for(i=0; i<size; i++)
    {
        if(a[i]==choice)
        {
            printf("%d at %d index ",a[i],i);
            break;
        }
    }
    return 0;
}
void view()
{
    printf("Array elements ");
    for(i=0; i<size; i++)
    {
        printf("%d\t",a[i]);
    }
}