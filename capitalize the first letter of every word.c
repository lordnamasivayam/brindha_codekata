#include<stdio.h>
int main()
{
int i;
char st[50];
gets(st);
for(i=0;st[i]!='\0';i++)
{
if(i==0)
{
if(st[i]>='a' && st[i]<='z')
st[i]=st[i]-32;
continue;
}
if(st[i]==' ')
{
i++;
if(st[i]>='a' && st[i]<='z')
st[i]=st[i]-32;
continue;
}
else
{
if(st[i]>='A' && st[i]<='Z')
st[i]=st[i]+32;
}
}
printf("%s",st);
return 0;
}
