#include<stdio.h>
int main()
{
int hr,mi,n;
scanf("%d",&n);
if(n<60)
{
hr=0;
mi=n;
printf("%d %d",hr,mi);
}
else
{
hr=n/60;
mi=n%60;
printf("%d %d",hr,mi);
}
return 0;
}
