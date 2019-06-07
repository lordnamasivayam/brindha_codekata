#include<stdio.h>
int main()
{
int k,n,d;
scanf("%d%d",&k,&n);
if(k>n)
d=k-n;
else
d=n-k;
printf("%d",d);
return 0;
}
