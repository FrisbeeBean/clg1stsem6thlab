#include<stdio.h>
int main()
{
    int i,p,c=0;
    char s[20],k;
    printf("Enter string\n");
    gets(s);
    printf("Enter the character\n");
    scanf("%c",&k);
    printf("Enter the index\n");
    scanf("%d",&p);
    for(i=0;s[i]!='\0';i++)
    c++;
    for(i=c-1;i>=p;i--)
    s[i+1]=s[i];
    s[p]=k;
    printf("New string is %s",s);
    return 0;
}
