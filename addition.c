#include <stdio.h>

int add(int x, int y)
{
	int sum = x+y;
	return sum;
}

int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = add(a, b);
	printf("%d", c);
	return 0;	
}
