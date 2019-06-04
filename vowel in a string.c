#include<stdio.h>
int main()
{
char st[50];
int i,f;
gets(st);
for(i=0;st[i]!='\0';i++)
{
if(st[i]=='a'||st[i]=='A'||st[i]=='e'||st[i]=='E'||st[i]=='i'||st[i]=='I'||st[i]=='o'||st[i]=='O'||st[i]=='u'||st[i]=='U')
f=1;
}
if(f==1)
printf("yes");
else
printf("no");
return 0;
}
