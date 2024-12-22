#include<stdio.h>
int main()
{
    int size,i,flag=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    printf("Enter key element:");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(a[i]==key)
        {
           flag=1;
           printf("Key element found at  pos %d",i);
           break;
        }
    }
    if(flag==0)
    {
        printf("Element not found in array");
    }
}