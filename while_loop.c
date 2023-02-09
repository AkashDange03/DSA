#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,i,sum=0;
    printf(" \n Enter number m: ");
    scanf("%d",&m);
    printf("\n Enter number n: ");
    scanf("%d",&n);
    i=m;
    while(i<=n) // 1<=3 2<=3 3<=3 4<=3(condition gets false and loop will be terminated)
    {
        sum=sum+i; //1+0=1 1+2=3 3+3=6
        i=i+1; // 2 3 4
    }
    printf(" \n sum of numbers = %d",sum);
    return 0;
}