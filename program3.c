#include<stdio.h>
int main()
{
    int i,c=0;
    char s1[40],s2[20];
    printf("Enter strings\n");
    gets(s1);
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
    c++;
    for(i=0;s2[i]!='\0';i++)
    s1[c+i]=s2[i];
    printf("Concatenated string is %s",s1);
    return 0;
}