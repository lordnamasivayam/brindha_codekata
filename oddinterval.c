#include <stdio.h>

int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<=m-1;i++)
{
    if(i%2==1)
    printf("%d ",i);
}    
return 0;
}
