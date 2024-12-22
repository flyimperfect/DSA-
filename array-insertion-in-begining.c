#include<stdio.h>
int main()
{
    int a[50],size,pos,num,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Overload not possible");
    }
    else
    {
        printf("Enter array elements");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter number to insert");
        scanf("%d",&num);
        for(i=size-1;i>=0;i--)
        {
            a[i+1]=a[i];

        }
        a[0]=num;
        size++;
        printf("The array elements are: ");
        for(i=0;i<size;i++)
        {
            printf("%d  ",a[i]);
        }
    }
}