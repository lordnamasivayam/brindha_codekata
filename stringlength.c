#include<stdio.h>
int main()
{
int i,c;
char str[100];
gets(str);
for(i=0;str[i]!=0;i++)
{
if(str[i]!=' ')
{
c++;
}
}
printf("%d",c);
return 0;
}
