#include<stdio.h>
int main()
{
int n,k,r=0;
scanf("%d",&n);
while(n!=0)
{
k=n%10;
r=r*10+k;
n=n/10;
}
printf("%d",r);
return 0;
}
