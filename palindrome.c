#include<stdio.h>
void main()
{
int n,s=0,a;
scanf("%d",&a);
n=a;
while(n!=0)
{
n=n%10;
s=s*10+n;
n=n/10;
}
printf("%d",s);
if(a==s)
printf("Yes");
else
printf("No");
}
