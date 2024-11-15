#include<stdio.h>
int main()
{
    int i;
    char s[20];
    printf("Enter string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
    	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    	printf("%c ",s[i]);
	}
	return 0;
}
