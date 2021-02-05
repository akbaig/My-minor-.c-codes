#include <stdio.h>

int main()
{
		int days, starting_day;
		printf("Enter total days in month: ");
		scanf("%d", &days);
		printf("Enter the starting day: ");
		scanf("%d", &starting_day);
		for(int i = 1; i <= (days + (starting_day -1)); i++)
		{
			if(i >= starting_day)
			{
				printf("%2d ", i-(starting_day-1));
				if(i%7 == 0) printf("\n");
			}
			else printf("   ");		
		}		
		return 0;
}
