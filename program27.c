#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,t=0,s[26]={0};
    char a[80];
    printf("Enter string\n");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    if(isupper(a[i]))
    a[i]+=32;
    for(i=0;a[i]!='\0';i++)
    {
        if(isalpha(a[i]))
        {
            s[a[i]-'a']++;
        }
    }
    for(i=0;i<26;i++)
    if(s[i]>0)
    t++;
    if(t==26)
    printf("is a pangram");
    else
    printf("is not a pangram");
    return 0;
}