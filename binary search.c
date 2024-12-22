#include<stdio.h>
int main()
{
    int a[50],i,size,key,found=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter key element:");
    scanf("%d",&key);
    int low=0,high=size-1;
    while(low<=high)
    {
       int mid=low+high/2;
       if(key<a[mid])
       {
          high=mid-1;
       }
       else if(key>a[mid])
       {
        low=mid+1;
       }
       else if(key==a[mid])
       {
           printf("Key element found at pos %d",mid);
           found=1;
           break;
       }
    }
}