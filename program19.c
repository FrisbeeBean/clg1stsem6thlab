#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a=0,b=0,c=0,d=0;
    char s[50];
    printf("Enter string\n");
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
        a++;
        else if(s[i]=='{')
        b++;
        else if(s[i]=='<')
        c++;
        else if(s[i]=='[')
        d++;
        else if(s[i]==')')
        {
            if(a>0)
            a--;
            else
            {
                printf("Invalid");
                exit(0);
            }
        }
        else if(s[i]=='}')
        {
            if(b>0)
            b--;
            else
            {
                printf("Invalid");
                exit(0);
            }
        }
        else if(s[i]=='>')
        {
            if(c>0)
            c--;
            else
            {
                printf("Invalid");
                exit(0);
            }
        }
        else if(s[i]==']')
        {
            if(d>0)
            d--;
            else
            {
                printf("Invalid");
                exit(0);
            }
        }
        else;
    }
    if(a==0 && b==0 && c==0 && d==0)
    printf("Valid");
    else
    printf("Invalid");
    return 0;
}