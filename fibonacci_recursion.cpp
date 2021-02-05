#include <iostream>

using namespace std;

void fib(int a, int b, int n)
{
	if(n != 0)
	{
		int res = a+b;
		cout << res << " ";
		fib(b, res, --n);
	}
}

int main()
{
	int first, second;
	first = 1;
	second = 1;
	cout << first << " " << second << " ";
	fib(first, second, 6);
	return 0;
}
