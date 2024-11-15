#include<stdio.h>
int main()
{
    int i,c=0;
    char s1[40],s2[40];
    printf("Enter string\n");
    fgets(s1,sizeof(s1),stdin);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]<=122 && s1[i]>=97)
        s2[i]=s1[i]-32;
        else
        s2[i]=s1[i];
        c++;
    }
    s2[c]='\0';
    printf("Uppercassed string is %s",s2);
    return 0;
}