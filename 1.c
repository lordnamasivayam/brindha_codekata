#include<stdio.h>
int main()
{
    int z,y=0,c,n;
    scanf("%d",&n);
    while(n!=0)
    {
        z=n%10;
        y=y*10+z;
        n=n/10;
    }
    printf("%d",y);
    return 0;
}
