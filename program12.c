#include<stdio.h> 
#include<ctype.h> 
int main()
{
    int i,c=0;
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
	int max=b[0],min=-1,ma=0,mi=0;
	for(i=1;i<26;i++)
	{
	if(max<b[i])
	{
	max=b[i];
	ma=i;
	}
	if(b[i]>0 && (min==-1 || b[i]<min))
	{
		min=b[i];
		mi=i;
	}
	}
	printf("The most repeated character is %c at %d times\n",ma+'a',max);
	if(min!=-1)
	printf("The least repeated character is %c at %d times\n",mi+'a',min);
	else
	printf("No valid least repeateed character found");
	return 0;
}
	
