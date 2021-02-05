#include <iostream>

using namespace std;

int largest(int list[],int size)
{
	if(size == 0) return list[size];
	int max = largest(list, --size);
	if(list[size] >= max)
		return list[size];
	else 
		return max;
}

int main()
{
	int array[2] = {54, 63};
	cout << largest(array, 2);
	return 0;
};
