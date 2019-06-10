#include<stdio.h>
int main()
{
int i,j,f;
char st[20];
gets(st);
for(i=0;st[i]!='\0';i++)
for(j=i+1;st[j]!='\0';j++)
if(st[i]==st[j])
{
f=1;
}
if(f==1)
printf("No");
else
printf("Yes");
return 0;
}
