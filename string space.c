#include<stdio.h>
int main()
{
char str[100];
int i,s;
gets(str);
for(i=0;str[i]!=0;i++)
if(str[i]==' ')
{
s++;
}
printf("%d",s);
return 0;
}
