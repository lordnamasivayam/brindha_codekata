#include<stdio.h>
int main()
{
int a[20],i,n,s=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
s=s+a[i];
}
printf("%d",s/n);
return 0;
}
