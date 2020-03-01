#include<stdio.h>
#include<string.h>
int main()
{
char s1[50],s2[50];
int i,t;
gets(s1);
gets(s2);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i] == s2[i])
 t=1;
 else
 t=0;
 }
 if(t==1)
 printf(" Both are equal");
 else
 printf(" Both are not equal");
 return 0;
 }
 
