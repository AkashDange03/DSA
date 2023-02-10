#include<stdio.h>
int binearysearch(int arr[],int low,int high,int key)
{
    int mid;
    if(low<=high){
      mid=(low+high)/2;
       if(key==arr[mid])
        {
            return mid;
        }
        if(key<arr[mid]) {
            return binearysearch(arr,low,mid-1,key);
        }
       else  {
            return binearysearch(arr,mid+1,high,key);
        }
    }
  return -1;
}
int main()
{
    int arr[]= {2,3,4,5,6};
    int low=0;
    int high=4;
    int key=6;
    int result=binearysearch(arr,low,high,key);
    if(result==-1)
    {
        printf("not present");
    }
    else
    {
        printf("present at %d",result);
    }

   return 0; 
}