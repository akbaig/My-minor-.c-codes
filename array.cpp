#include <stdio.h>

int main()
{
	int array[10];
	printf("Enter 10 numbers: ");
	for(int i=0; i<10; i++)
	{
		scanf("%d", &array[i]);
		array[i]++;
		printf("Incremented value:%d\n", array[i]);
	}
	return 0;
}


