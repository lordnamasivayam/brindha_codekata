#include<stdio.h>
int main()
{
    int n,i,c,m;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
    for(c=2;c<=i;c++)
    {
    if(i%c==0)
      {
          break;
    }
    }
    if(c==i)
    printf("%d ",i);
    }
    return 0;
}
