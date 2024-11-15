#include<stdio.h>
#include<ctype.h>
int main()
{
    int i;
    char a[50];
    printf("Enter string\n");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    if(isupper(a[i]))
    {
        printf("The first capitsl letter in the string is %c",a[i]);
        break;
    }
    return 0;
}