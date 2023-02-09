#include<stdio.h>
int main()
{
    int a[3]={2,3,1},i,j;  //[2,1,3] //[1,2,3]
    int n=3;
    int temp;
    for(i=1; i<n; i++)       //i=1                                 //i=2 true                   //i=3 false
    {
        for(j=0; j<n-i; j++) //j=0  true   j=1 true  j=2 false     //j=0 true    //j=1 false
        {
            if(a[j]>a[j+1])  //2>3 false   3>1 true                //2>1 true
            {
                temp=a[j];   //temp=3                              //temp=2
                a[j]=a[j+1]; //a[1]=1                              //a[0]=1
                a[j+1]=temp; //a[2]=3                              //a[1]=2
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf(" %d ",a[i]);
    }
}