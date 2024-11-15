#include<stdio.h>
#include<string.h>
int main()
{
    int i,t=0,k=0,l[15];
    char a[180],b[15][12];
    printf("Enter string\n");                       
    fgets(a,sizeof(a),stdin);
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
    for(i=0;i<t;i++)
    {
        l[i]=strlen(b[i]);
    }
    int max=-1,min=15,ma,mi;
    for(i=0;i<t;i++)
    {
        if(max<l[i])
        {
        max=l[i];
        ma=i;
        }
        if(min>l[i])
        {
        min=l[i];
        mi=i;
        }
    }
        printf("The largest word in the string is %s\n",b[ma]);
        printf("The smallest word in the string is %s",b[mi]);
    return 0;
}