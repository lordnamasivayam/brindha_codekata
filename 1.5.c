#include<stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char st[10][50], t[50];

    printf("Enter 10 words:\n");

    for(i=0; i<10; ++i)
        scanf("%s[^\n]",st[i]);


    for(i=0; i<9; ++i)
        for(j=i+1; j<10 ; ++j)
        {
            if(strcmp(st[i], st[j])>0)
            {
                strcpy(t, st[i]);
                strcpy(st[i], st[j]);
                strcpy(st[j], t);
            }
        }

    printf("\nIn lexicographical order: \n");
    for(i=0; i<10; ++i)
    {
        puts(st[i]);
    }

    return 0;
}
