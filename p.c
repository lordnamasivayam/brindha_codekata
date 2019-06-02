#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
for(i=2;i<=n;i++)
if(n%2==0)
{
break;
}
if(n==i)
printf("yes");
else
printf("no");
return 0;
}
