#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    char a[size];
    printf("Enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf(" %c",&a[i]);
    }
    int vowel=0,consonant=0;
    for(i=0;i<size;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            vowel=vowel+1;
        }
        else if(a[i]>='a'&& a[i]<='z'||a[i]>='A'&&a[i]<='Z')
        {
            consonant=consonant+1;
        }
    }
    printf("%d\n",vowel);
    printf("%d",consonant);
}