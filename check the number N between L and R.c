#include<stdio.h>
int main()
{
int n,l,k;
scanf("%d",&n);
scanf("%d%d",&l,&k);
if(l<n && n<k)
printf("yes");
else
printf("no");
return 0;
}
