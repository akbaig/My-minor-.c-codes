#include <stdio.h>

//#define N (int)(sizeof(num)/sizeof(num[0]))

int main()
{
	int num[9] = {0}, input;
	printf("Enter a number:");
	scanf("%d", &input);
	while(input != 0)
	{
		num[input%10]++;
		input /= 10;
	}
	for(int i=0; i<9;i++)
	{
		if(num[i] > 1) printf("%d[%d] ", i, num[i]);
	}
	return 0;
}
