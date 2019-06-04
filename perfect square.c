#include<stdio.h>
#include<math.h>
int main()
{
int k,l,n,t;
scanf("%d%d",&k,&l);
n=k*l;
t=sqrt(n);
if(t*t==n)
printf("yes");
else
printf("no");
return 0;
}
