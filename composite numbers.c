#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
for(i=2;i<=n;i++)
if(n%i==0)
{
break;
}
if(n==i)
printf("no");
else
printf("yes");
return 0;
}
