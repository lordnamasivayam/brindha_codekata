#include<stdio.h>
int main ()
{
    int a[40],t,i,n,k,c;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        c++;
        t=k;
    }
    if(t==k)
    printf("%d",c);
    else
    printf("not found");
    return 0;
}
