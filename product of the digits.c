#include<stdio.h>
int main()
{
int n,k,p=1;
scanf("%d",&n);
while(n!=0)
{
k=n%10;
p=p*k;
n=n/10;
}
printf("%d",p);
return 0;
}
