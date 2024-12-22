#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of the array is %d",sum);
}