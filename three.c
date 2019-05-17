#include<stdio.h>
void main()
{
double a,b,c;
printf("Enter the three number\n");
scanf("%lf%lf%lf",&a,&b,&c);
if(a>b)
printf(" %.1lf",a);
else if(b>c)
printf(" %.1lf",b);
else
printf(" %.1lf",c);
}

