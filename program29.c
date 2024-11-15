#include<stdio.h>  
#include<ctype.h>
#include<string.h>
int main()
{
    int i,j;
    int b[26]={0};
    char s[80],str[80];

    printf("Enter strings\n");
    fgets(s,sizeof(s),stdin);
    fgets(str,sizeof(str),stdin);

    if(strlen(s)!=strlen(str))
    {
        printf("STring lengths not equal\n");
        return 0;
    }

    for(i=0;s[i]!='\0';i++)
    {
    if(isupper(s[i]))
    s[i]+=32;
    if(isupper(str[i]))
    str[i]+=32;
    }

    for(i=0;i<strlen(s);i++)
    {
    	if(isalpha(s[i]))
    	b[s[i]-'a']++;
        if(isalpha(str[i]))
        b[str[i]-'a']--;
	}

    for(i=0;i<26;i++)
    if(b[i]!=0)
    {
        printf("Not anagram");
        return 0;
    }
    printf("Anagram");
    return 0;
}