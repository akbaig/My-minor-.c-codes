#include <stdio.h>

int psquareroot(int number)
{
	for(int i=0; i<=1000; i++)
	{	
		if((i*i) == number)
		{
			return i;	
		}
	}
}
int main()
{
	float number, result;
	int min, max;
	printf("Enter a non-perfect square number: ");
	scanf("%f", &number);
	min = number;
	max = min + 1;
	printf("%d\n", min);
	printf("%d\n", max);
	min = psquareroot(min);
	max = psquareroot(max);
	printf("%d\n", min);
	printf("%d\n", max);
	result = (min+(number/min))/2;
	printf("Number is %.2f", result);
	return 0;
}

