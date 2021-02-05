#include <stdio.h>

//Implentation of pointers including return type pointer.

int *returnaddress(int *a);
int add(int a, int b, int *p);

int main()
{
	int a = 2, b = 2, sum;
	
	add(a, b, returnaddress(&sum)); // equivalent to >> add(a, b, &sum); || Written for the sake of understanding
	
	printf("%d", sum);
	return 1;
}

int add(int a, int b, int *p)
{
	*p = a+b;
	return 1;
}
int *returnaddress(int *a)
{
	return a;
}
