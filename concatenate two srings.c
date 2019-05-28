#include<stdio.h>
int main()
{
char st[20],tr[20];
int i=0,j=0;
scanf("%s%s",&st,&tr);
while(st[i]!='\0')
{
i++;
}
while(tr[j]!='\0')
{
st[i]=tr[j];
j++;
i++;
}
st[i]='\0';
printf("%s",st);
return 0;
}

