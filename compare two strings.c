#include<stdio.h>
int main()
{
int i;
char g[50],b[50];
scanf("%s%s",g,b);
for(i = 0; g[i] == b[i] && g[i] == '\0'; i++);
if(g[i]<b[i])
printf("%s",b);
else if(g[i]>b[i])
printf("%s",g);
else
printf("%s",g);
return 0;
}
