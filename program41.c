#include<stdio.h>
int main()
{
    int i,t=0,k=0;
    char a[180],b[15][12];
    printf("Enter string\n");                       //to separate words in a different line from a lengthy string
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
        b[t][k++]=a[i];
        }
        else
        {
        b[t][k]='\0';
        k=0;
        t++;
        }
    }
    b[t][k]='\0';
    t++;
    for (i = 0; i < t; i++)
    {
        printf("%s\n", b[i]);
    }
    return 0;
}