#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(n>1)
{
if(n%2!=0)
{
break;
}
n=n/2;
}
if(n==1)
printf("yes");
else
printf("no");
return 0;
}
