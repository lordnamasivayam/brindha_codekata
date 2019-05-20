#include<stdio.h>
int main()
{
int n,m,i,a,b,t;
scanf("%d%d",&n,&m);
for(i=n+1;i<m;i++)
{
    t=i;
    b=0;
while(t!=0)
{
  a=t%10;
  b=b+a*a*a;
  t=t/10;
}
if(i==b)
{
printf("%d ",i);
}
}
return 0;
}
