#include<stdio.h>
int i,value;
int a[20],size;
void max();
void view();
void min();
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
    max();
    min();
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
void max()
{
    int max=0;
    for(i=0; i<size; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Max value: %d",max);
}

void min()
{
    int min=a[0];
    for(i=0; i<size; i++)
    {
        
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nMin value: %d",min);
}