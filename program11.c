#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,j,c=0;						
    char s[60];
    printf("Enter string\n");
    fgets(s,sizeof(s),stdin);
    if(isupper(s[0])==0)
    s[0]=s[0]-32;
    for(i=0;s[i]!=' ';i++);
    i++;
    while(s[i]!='\0')
	{
		if(isupper(s[i])==0)
    	s[i]=s[i]-32;
		for(j=i;s[i]!=' ';j++)
    	i++;
    	i++;
	}
	printf("New string is %s",s);
    return 0;
}



