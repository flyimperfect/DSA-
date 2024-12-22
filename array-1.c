#include<stdio.h>
int  main()
{
    int a[50],size,pos,i,num;
    printf("Enter size of array:");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Overload condition");
    }
    else
    {
        printf("Enter array elements:");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter position to insert element:");
        scanf("%d",&pos);
        printf("Enter element to insert:");
        scanf("%d",&num);
        for(i=size-1;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=num;
        size++;
        for(i=0;i<size;i++)
        {
            printf("%d  ",a[i]);
        }
    }
}