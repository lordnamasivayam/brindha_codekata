#include<stdio.h>
int main()
{
int i,w;
char str[100];
gets(str);
for(i=0;str[i]!=0;i++)
{
if(str[i]==' ')
{
w++;
}
}
printf("%d",w+1);
return 0;
}

