#include<Stdio.h>
int main()
{
    int i;
    char s[40];
    printf("Enter string\n");
    gets(s);
    for(i=2;s[i]!='\0';i=i+2)
    {
        if((s[i]!=s[0]  || s[i+1]!=s[1])==1)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}