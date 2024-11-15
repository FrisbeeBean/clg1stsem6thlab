#include<stdio.h>
int main()
{
    int i;
    char s1[20],k,c=0;
    printf("Enter string\n");
    gets(s1);
    printf("Enter character\n");
    scanf("%c",&k);
    for(i=0;s1[i]!='\0';i++)
        if(s1[i]==k)
        {
        	printf("The first occurence of character is at %d",i+1);
            c++;
        	break;
		}
		if(c==0)
		printf("No occurence of the given character");
    return 0;
}
