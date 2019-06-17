#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char st[50],t[20];
    gets(st);
    l=strlen(st);
    if(l%2==0)
    {
        t[i]=st[l/2];
    }
    printf("%c",t[i]);
    return 0;
}
