#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
if(isdigit(c)==0)
printf("No");
else
printf("Yes");
return 0;
}
