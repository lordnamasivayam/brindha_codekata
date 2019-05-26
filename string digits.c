#include<stdio.h>
int main()
{
int i,s;
char str[100];
gets(str);
for(i=0;str[i]!=0;i++)
if((str[i]>='0')&&(str[i]<='9'))
{
s++;
}
printf("%d",s);
return 0;
}
