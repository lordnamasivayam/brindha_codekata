#include<stdio.h>
int main()
{
int n1,n2,max,i;
scanf("%d%d",&n1,&n2);
max=(n1>n2)? n1:n2;
i=max;
while(1)
{
if(i%n1==0 && i%n2==0)
{
break;
}
i++;
}
printf("%d",i);
return 0;
}
