#include<stdio.h>
int main()
{
int i,a,n,d,v,s=0;
scanf("%d%d%d",&n,&a,&d);
v=a;
for(i=0;i<n;i++)
{
s=s+v;
v=v+d;
}
printf("%d",s);
return 0;
}
