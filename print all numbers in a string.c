#include<stdio.h>
int main()
{
    char st[20];
    int i,f;
    gets(st);
    for(i=0;st[i]!='\0';i++)
    if(st[i]>='0' && st[i]<='9')
    {
    printf("%c",st[i]);
    f=1;
    }
    if(f!=1)
    printf("Not found");
    return 0;
}
