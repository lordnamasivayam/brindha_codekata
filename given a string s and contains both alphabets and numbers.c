#include<stdio.h>
int main()
{
int f,i;
char st[20];
gets(st);
for(i=0;st[i]!='\0';i++)
{
if((st[i]>='a' || st[i]<='z' || st[i]>='A' || st[i]<='Z') && (st[i]>='0' && st[i]<='9'))
f=1;
}
if(f==1)
printf("Yes");
else
printf("No");
return 0;
}
