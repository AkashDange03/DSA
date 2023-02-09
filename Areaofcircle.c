#include<stdio.h>
#include<conio.h>
int main()
{
    float area,radius;
    const float pi=3.14;
    printf("\n Enter radius : ");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("\n Area of cicle : %.2f" , area);
    return 0;
}