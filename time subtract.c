#include<stdio.h>
int main()
{
int hr,hr1,hr2,mi,mi1,mi2;
scanf("%d %d",&hr,&mi);
scanf("%d %d",&hr1,&mi1);
hr2=hr-hr1;
mi2=mi-mi1;
printf("%d %d",hr2,mi2);
return 0;
}
