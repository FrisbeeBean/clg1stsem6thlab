#include<stdio.h>
int main()
{
    int i,c=0;
    char s[20],t;
    printf("Enter string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    c++;
    for(i=0;i<c/2;i++)
    {
    t=s[i];
    s[i]=s[c-i-1];
    s[c-i-1]=t;
	}
	printf("Reversed string is %s",s);
    return 0;
}
