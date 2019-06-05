#include<stdio.h>
int main()
{
int p,t,r,SI;
scanf("%d%d%d",&p,&t,&r);
SI=p*t*r/100;
printf("%.0f",floor(SI));
return 0;
}
