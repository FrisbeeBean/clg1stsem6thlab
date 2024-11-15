#include<stdio.h>
int main()
{
    int i;
    char a[100];
    printf("Enter string\n");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
        if(a[i]=='(' || a[i]==')' || a[i]=='[' || a[i]==']' || a[i]=='{' || a[i]=='}')
            for(int j=i+1;a[j]!='\0';j++)
            {
                a[j-1]=a[j];
            }
    printf("%s",a);
    return 0;
}