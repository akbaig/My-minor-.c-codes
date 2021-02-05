#include <stdio.h>
#include <math.h>

int main(void)
{
	float x, y=1, avg;
	printf("Enter a positive number: ");
	scanf("%f", &x);
	avg = ((y+(x/y))/2);
	while(!(fabs(y-avg) < (.00001*y)))
	{
		y=avg; 
		avg = (y+(x/y))/2;
	}
	printf("Sqaure root = %.2f", avg);
	return 0;
}
