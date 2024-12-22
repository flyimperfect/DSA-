#include<stdio.h>
struct Student
{
    int roll;
    float per;
    char name[20];
};
int main()
{
    struct Student s[50];
    int i;
    printf("Enter student details:");
    for(i=0;i<3;i++)
    {
        scanf("%d %f %s",&s[i].roll,&s[i].per,s[i].name);
    }
}