#include<stdio.h>
int main()
{
int b,p,r=1,i=1;
scanf("%d%d",&b,&p);
while(i<=p)
{
r=r*b;
i++;
}
printf("%d",r);
return 0;
}
