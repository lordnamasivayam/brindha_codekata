#include<stdio.h>
int main()
{
    int a[50],i;
    for(i=0;i<4;i++)
    scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    if(a[i]%2==1)
    {
    printf("%d",a[i]);
    }
    return 0;
}
