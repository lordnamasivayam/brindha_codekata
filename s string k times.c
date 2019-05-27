#include<stdio.h>
int main()
{
char s[100];
int i,k;
gets(s);
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%s\n",s);
}
return 0;
}
