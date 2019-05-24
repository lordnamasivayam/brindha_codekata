#include<stdio.h>
int main()
{
int i,j,a[50],t,n,l;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
if(n%2==0)
l=(a[(n+1)/2]+a[n/2])/2;
else
l=a[n/2];
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
printf("%d\n",l);
return 0;
}
