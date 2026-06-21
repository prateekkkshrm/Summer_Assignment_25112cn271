#include<stdio.h>

int main()
{
    char s[100];
    int i=0,j;
    char t;

    gets(s);

    while(s[i]!='\0')
        i++;

    for(j=0;j<i/2;j++)
    {
        t=s[j];
        s[j]=s[i-j-1];
        s[i-j-1]=t;
    }

    printf("%s",s);

    return 0;
}