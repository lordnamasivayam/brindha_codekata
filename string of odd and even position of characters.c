#include<stdio.h>
#include<string.h>
int main()
{
char st[50],even[50],odd[50];
int i,j,k;
i=j=k=0;
gets(st);
while(st[i]!='\0')
{
if(i%2==0)
{
even[k++]=st[i];
}
else
{
odd[j++]=st[i];
}
i++;
}
even[k]=odd[j]='\0';
printf("%s ",even);
printf("%s",odd);
return 0;
}
