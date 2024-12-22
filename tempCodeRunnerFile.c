#include<stdio.h>
int main()
{
    int a[50],pos,i,size;
    printf("Enter size of array:");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Invalid");
    }
    else
    {
        printf("Enter array elements:");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter position to delete element:");
        scanf("%d",&pos);
        if(pos<0||pos>size)
        {
            printf("Invalid");
        }
        else
        {
            for(i=pos-1;i<size-1;i++)
            {
                a[i]=a[i+1];
            }
            size--;
            for(i=0;i<size;i++)
            {
                printf("%d ",a[i]);
            }
        }
    }
}