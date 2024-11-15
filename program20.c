#include<stdio.h>
#include<string.h>
int main()
{
    int i,t=0,k=0;
    char a[180],b[15][12],c[12];
    printf("Enter string\n");                     
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
        b[t][k++]=a[i];
        }
        else
        if(k>0)
        {
        b[t][k]='\0';
        k=0;
        t++;
        }
    }
    if(k>0)
    {
        b[t][k]='\0';
        t++;
    }
    for(i=0;i<t-1;i++)
    for(int j=0;j<t-i-1;j++)
    if(b[j][0]>b[j+1][0])
    {
        strcpy(c,b[j]);
        strcpy(b[j],b[j+1]);
        strcpy(b[j+1],c);
    }
    for(i=0;i<t;i++)
    {
        printf("%s ",b[i]);
    }
    return 0;
}