#include<stdio.h>
int main()
{
int n,s=0,k;
scanf("%d",&n);
while(n>0)
{
k=n%10;
s=s+k;
n=n/10;
}
printf("%d",s);
return 0;
}
