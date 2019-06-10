#include<stdio.h>
int main()
{
int i;
char st[20];
gets(st);
for(i=0;st[i]!='\0';i++)
if(st[i]>='0' && st[i]<='9')
{
printf("%c",st[i]);
}
return 0;
}
