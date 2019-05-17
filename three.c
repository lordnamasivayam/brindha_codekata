#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the three number\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
printf(" a is greater");
else if(b>c)
printf(" b is greater");
else
printf(" c is greater");
}
