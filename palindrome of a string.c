#include<stdio.h>
#include<string.h>
int main()
{
char st[50],original[50],t;
int i,j;
gets(st);
strcpy(original,st);
i=0;
j=strlen(st)-1;
while(i<j)
{
t=st[i];
st[i]=st[j];
st[j]=t;
i++;
j--;
}
if(strcmp(original,st)==0)
printf("yes");
else
printf("no");
return 0;
}
