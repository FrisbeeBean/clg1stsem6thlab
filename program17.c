#include<stdio.h>
int main()
{
    int i,c=0;
    char s[80];
    printf("Enter string\n");
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++)
    if(s[i]==' ')
    c++;
    printf("The number of words are %d",c+1);
    return 0;
}