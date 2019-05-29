#include<stdio.h>
int main()
{
int M,B,C;
scanf("%d%d",&M,&B);
M=M^B;
B=M^B;
M=M^B;
printf("%d %d",M,B);
return 0;
}
