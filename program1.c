#include<stdio.h>
int main()
{
    int i,c=0;
    char s[20];
    printf("Enter string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    c++;
    printf("String length is %d",c);
    return 0;
}