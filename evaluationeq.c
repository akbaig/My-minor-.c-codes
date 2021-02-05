#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, last_ch = 0;
    int space_count = 0, letter_count = 0;

    printf("\nEnter sentence: ");

    while ((ch = getchar()) != '\n')
    {
    	if(ch != ' ')
		{
			letter_count++;
			last_ch = ch;
		}
    	else
		{
			if(last_ch != ' ')
			{
				space_count++;
				last_ch = ch;
			}
		}
	}
	printf("Avg word length: %.1f", (float)letter_count/(space_count+1)); //space_count+1 ... because words are +1 than the spaces in a sentence.
	return 0;
}
