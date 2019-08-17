#include<stdio.h>
int main()
{
int a=0,b=1,c,i,n;
scanf("%d",&n);
printf("%d ",a);
for(i=1;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d ",a);
}
return 0;
}
