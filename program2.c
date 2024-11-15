#include<stdio.h>
int main()
{
    int i;
    char s1[20],s2[20];
    printf("Enter string\n");
    gets(s2);
    for(i=0;s2[i]!='\0';i++)
    {
        s1[i]=s2[i];
    }
    printf("copied string is ");
    puts(s1);
    return 0;
}