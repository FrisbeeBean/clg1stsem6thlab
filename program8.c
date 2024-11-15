#include<stdio.h>
int main()
{
    int i,c=0,c1=0;
    char s[20],a[20],t;
    printf("Enter string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    a[i]=s[i];
    for(i=0;s[i]!='\0';i++)
    c++;
    for(i=0;i<c/2;i++)
    {
    t=s[i];
    s[i]=s[c-i-1];
    s[c-i-1]=t;
	}
	for(i=0;s[i]!='\0'&& a[i]!='\0';i++)
    {
    	if(s[i]!=a[i])
    	{
    		printf("Not palindrome");
    		c1++;
    		break;
		}
	}
	if(c1==0)
    printf("Palindrome");
    return 0;
}
