#include <stdio.h>

int main()
{
    char ch;
    int lc_Vowel, uc_Vowel;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);

    lc_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uc_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lc_Vowel || uc_Vowel) {
    	printf("\n %c is a VOWEL.", ch);
	}
    else if {
    	printf("\n %c is a CONSONANT.", ch);
	}
	else
	{
		printf("Invalid"):
	}
    return 0;
}
