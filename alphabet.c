#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("%c  Alphabet",ch);
    }
    else
    {
        printf("%c No",ch);
    }
    return 0;
}
