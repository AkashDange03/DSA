#include<stdio.h>
#include<conio.h>
//call_by_value
void add_value(int c, int d)
{
    int sum;
    sum=c+d;
    printf("\n sum of %d and %d = %d",c,d,sum);
}
// call_by_reference
void add_ref(int *e,int *f)
{
    int sum,temp;
    sum=*e+*f;
    temp=*e;
    *e=*f;
    *f=temp;
    printf("\n sum of  %d",sum);
}
int main()
{
    int a=2,b=3;
    printf("\n call by value");
    add_value(a,b);
    printf("\n value of a=%d and b=%d \n",a,b);
    printf("\n call by reference");
    add_ref(&a,&b);
    printf("\n value of a=%d and b=%d",a,b);

    return 0;
}

