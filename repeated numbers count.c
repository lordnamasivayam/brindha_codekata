#include<stdio.h>
int main()
{
int n,k,i,j,c=0,a[50];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}
printf("%d",c);
return 0;
}
