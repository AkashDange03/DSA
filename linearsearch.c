#include<stdio.h>
int main()
{
    int a[6]={5,6,7,2,6,9};
    int i,search;
    for (size_t i = 0; i < 6; i++)
    {
        /* code */
        printf("Array element:-%d\n",a[i]);
    }
    printf("Enter the element to be search:\n");
    scanf("%d",&search);
    for(i=0; i<6; i++)
    {
        if (a[i]==search)
        {
            /* code */
            printf("%d elemetn found on %d this position: ",search,i);
            break;
        }
        else
        {
            if (i==5)
            {
                /* code */
                printf(" element not found");
                break;
            }
            
        }
        
        
    }
    return 0;
}