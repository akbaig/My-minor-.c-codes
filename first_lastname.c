#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch, first_letter;
	int i = 0, second = 0;
	printf("Enter the first and last name: ");
	while((ch = getchar()) != '\n')
	{
		if(ch != ' ')
		{
			i++;
			if(i == 1) first_letter = ch;
			else if(second == 1) printf("%c", ch);
		}
		else
		{
			if(i != 0 && second == 0) second = 1;
		}
	}
	printf(", %c.", first_letter);
	return 0;
}
