#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i,j,f[26]={1};
    char a[50],b[50];
    int m1[26]={0},m2[26]={0},x=0;

    printf("Enter strings\n");
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    if(strlen(a)!=strlen(b))
    {
        printf("Enter valid strings\n");
        return 0;
    }

    for(i=0;a[i]!='\0';i++)
    {
    if(isupper(a[i]))
    a[i]+=32;
    if(isupper(b[i]))
    b[i]+=32;
    }

    for(i=0;a[i]!='\0';i++)
    {
        //need two mapping bcoz with one some cases are missed
        if(m1[a[i]-'a']==0 && m2[b[i]-'a']==0)    
        {
            m1[a[i]-'a']=b[i]-'a';
            m2[b[i]-'a']=a[i]-'a';
        }
        else if(m1[a[i]-'a']!=b[i]-'a' || m2[b[i]-'a']!=a[i]-'a')
        {
            x=1;
            break;
        }
    }
    if(x==0)
    printf("Isomorphic");
    else
    printf("Not isomorphic");
    return 0;
}
   