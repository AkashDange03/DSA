#include<stdio.h>
#include<conio.h>
int main()
{
    int num=2;
    int *p;
    p=&num;
    printf("\n address of num variable %d",&num);
    printf("\n address of pointer %d",p);
    printf("\n value in pointer %d",*p);
    return 0;


}