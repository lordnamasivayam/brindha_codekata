#include<stdio.h>
int main()
{
    int n,s=0,a,b;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        b=a%10;
        s=s+b*b*b;
        a=a/10;
    }
    if(n==s)
    printf("yes");
    else
    printf("no");
    return 0;
}
