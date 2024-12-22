#include<stdio.h>
int add(int a[],int size);
    

int main()
{
    int size,i;
    printf("Enter size of array :");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int result=add(a,size);
    printf("%d",result);
}
int add(int a[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    return sum;

}
