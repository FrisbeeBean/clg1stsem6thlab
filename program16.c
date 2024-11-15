#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,k=0;
    char s[100],sn[100];
    printf("Enter string\n");
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U');
        else
        sn[k++]=s[i];
    }
    printf("%s",sn);
    return 0;
    }