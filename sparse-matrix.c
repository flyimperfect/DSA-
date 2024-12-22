#include<stdio.h>
int main()
{
    int row,column;
    int count;
    int i,j;
    printf("Enter no of rows and columns of matrix:");
    scanf("%d%d",&row,&column);
    int a[row][column];
    printf("Enter matrix elements:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>(row+column)/(2))
    {
        printf("Matrix is sparse");
    }
    else
    {
        printf("Not a sparse matrix");
    }

}