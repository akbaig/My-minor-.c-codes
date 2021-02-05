#include <stdio.h>

int main()
{
	int m, n, remainder;
	scanf("%d %d", &m, &n);
	while (n != 0)
	{
		remainder = m%n;
		printf("%d\n", remainder);
		m = n;
		n = remainder;
	}
	printf("Greatest GCD is: %d", m);
	return 0;
}
