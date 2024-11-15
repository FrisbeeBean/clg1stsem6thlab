#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,c=0,c1=0,c2=0;
    char s1[20],s2[20];
    printf("Enter strings\n");
    gets(s1);
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
    c1++;
    for(i=0;s2[i]!='\0';i++)
    c2++;
    if(c1!=c2)
    {
    printf("Not equal");
    exit(0);
	}
    for(i=0;s1[i]!='\0';i++)
    {
    	if(s1[i]!=s2[i])
    	{
    		printf("Not equal");
    		c++;
    		break;
		}
	}
	if(c==0)
    printf("Strings are equal");
    return 0;
}
