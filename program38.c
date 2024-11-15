#include<stdio.h>
int main()
{
    int i,j,f[50]={0};
    char a[50];
    printf("Enter string\n");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    for(j=0;j<i;j++)
    if(a[i]==a[j])
    {
        f[i]=1;
        break;
    }
    for(i=0;a[i]!='\0';i++)
    if(f[i]!=1)
    printf("%c",a[i]);
    return 0;
}