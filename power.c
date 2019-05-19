#include<stdio.h>
int main()
{
int bas,expo,res=1;
scanf("%d",&bas);
scanf("%d",&expo);
int i=1;
while(i<=expo)
{
res=res*bas;
i++;
}
printf("%d",res);
return 0;
}
