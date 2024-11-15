#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t=0;
    char a[50];
    printf("Enter string\n");
    fgets(a,sizeof(a),stdin);
    int n=strlen(a);
    for(i=0;i<n;i++) //i tells about how many blocks and how many letters  
    {
        for(j=0;j<n-i-1;j++) //j tells about how many rows in a single block
        {
            for(k=t;k<=i+t;k++) //k with the help of t tells about the index of the character to print
            printf("%c",a[k]);
            t++;
            printf("\n");
        }
        t=0;
    }
    return 0;
}