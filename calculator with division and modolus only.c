#include<stdio.h>
int main()
{
int n1,n2;
float r;
char ch;
scanf("%d%c%d",&n1,&ch,&n2);
switch(ch)
{
case '/':
r=n1/n2;
break;
case '%':
r=n1%n2;
break;
}
printf("%.0f",r);
return 0;
}
