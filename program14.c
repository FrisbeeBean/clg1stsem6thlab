#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,v=0,c=0,d=0,w=0;
    char s[100];
    printf("Enter string\n");
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
        v++;
        else if(s[i]==' ')
        w++;
        else if(isdigit(s[i]))
        d++;
        else
        c++;
    }
    printf("The number of vowels are %d\nThe number of consonants are %d\nThe number of digits are %d\nThe number of whitespaces are %d",v,c,d,w);
    return 0;
    }