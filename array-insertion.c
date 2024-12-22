#include<stdio.h>
int main()
{
    int a[50],size,pos,num,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Overflow condition");
    }
    else
    {
        printf("Enter array elements");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter element to insert:");
        scanf("%d",&num);
        printf("Enter position at which element has to be inserted");
        scanf("%d",&pos);
        for(i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
        for(i=0;i<size;i++)
        {
            printf("%d  ",a[i]);
        }
    }
}