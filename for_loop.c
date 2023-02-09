#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("\n Enter the number to check whether it's prime or composite: ");
    scanf("%d",&num); //3
    for(i=2; i<=num; i++) //2<=3 3<=3
    {
        if(num%i==0) //3%2==1(false) 3%3=0(true)
        {
            if(i==num)//3==3(true)
            {
                printf("\n %d is prime number ",num); //3 is prime
                break;// loop will be terminated
            }
            else
            {
                printf("\n  %d is composite number",num);
                break;
            }
            
        }
    }
    return 0;
}