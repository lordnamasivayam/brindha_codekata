#include<stdio.h>
int main()
{
    int a[20],i,n,k,s=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=k;i++)
    {
     s=s+i;   
    }
    printf("%d",s);
    return 0;
}
