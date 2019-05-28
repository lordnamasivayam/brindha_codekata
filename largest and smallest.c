#include<stdio.h>
int main()
{
int n,a[20],i,l,s;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
l=s=a[0];
for(i=0;i<n;i++)
{
if(a[i]>l)
l=a[i];
if(a[i]<s)
s=a[i];
}
printf("%d ",s);
printf("%d",l);
return 0;
}
