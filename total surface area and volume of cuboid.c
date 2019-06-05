#include<stdio.h>
int main()
{
int l,b,h,TSA,V;
scanf("%d%d%d",&l,&b,&h);
TSA=2*l*b+2*l*h+2*b*h;
V=l*b*h;
printf("%d %d",TSA,V);
return 0;
}
