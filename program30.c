#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,c=0;
    char s[100];
    printf("Enter the string\n");
    gets(s);
    n=strlen(s);
    for(i=n-1;i>=0 && s[i]!=' ';i--)
    c++;
    if(n==0)
    printf("-1");
    else
    printf("The length of the last word is %d",c);
    return 0;
}