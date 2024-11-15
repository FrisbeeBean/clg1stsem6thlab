#include<stdio.h>
int main()
{
    int i,t=0,k=0,c1=0;
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
            if(b[i][0]=='t'&&b[i][1]=='h'&&b[i][2]=='e'&&b[i][3]=='\0')
            c1++;
    }
    printf("The frequency of 'the' word appearing in the string is %d",c1);
    return 0;
}