#include<stdio.h>
int main()
{
int a,d,n,k,i,t=0;
scanf("%d%d%d",&a,&d,&n);
k=a;
for(i=0;i<n;i++)
{
t=t+k;
k=k+d;
}
printf("%d",t);
return 0;
}
