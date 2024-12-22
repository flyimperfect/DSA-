#include<stdio.h>
struct Student{
    int roll;
    float marks;
    char name[100];
};
int main()
{
    struct Student s1;
    printf("Enter roll no , marks,name");
    scanf("%d%f%s",&s1.roll,&s1.marks,&s1.name);
    printf("%d %f %s",s1.roll,s1.marks,s1.name);
}