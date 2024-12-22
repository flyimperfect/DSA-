#include<stdio.h>
int main()
{
  int a[5];
  int b[5];
  int c[10];
  printf("Enter elements of array 1:");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter elemets of array 2:");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&b[i]);
  }
  for(int i=0;i<5;i++)
  {
    c[i]=a[i];
  }
  for(int i=5;i<10;i++)
  {
    c[i]=b[i-5];
  }
  for(int i=0;i<10;i++)
  {
    printf("%d ",c[i]);
  }

}