#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
char st[40],t[30];
gets(st);
i=0;
j=strlen(st)-1;
while(i<j)
{
t[i]=st[i];
st[i]=st[j];
st[j]=t[i];
i++;
j--;
}
printf("%s",st);
return 0;
}
