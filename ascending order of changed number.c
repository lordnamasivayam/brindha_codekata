#include<stdio.h>
int main()
{
int n,a[20],i,t;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
t=a[0];
for(i=0;i<n;i++)
if(t<=a[i])
{
t=a[i];
}
else
printf("%d",i-1);
return 0;
}
