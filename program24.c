#include<stdio.h>  
#include<ctype.h>
int main()
{
    int i,c=0,j,t,p;
    char s[80],b[26]={0};
    printf("Enter string\n");
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++)
    c++;
    for(i=0;i<c;i++)
    if(isupper(s[i]))
    s[i]+=32;
    for(i=0;i<c;i++)
    {
    	if(isalpha(s[i]))
    	b[s[i]-'a']++;
	}
    for(i=0;i<26;i++)
    {
        if(b[i]>0)
        printf("The frequency of %c is %d\n",i+97,b[i]);
    }
    return 0;
}