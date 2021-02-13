#include <iostream>
#include <stdlib.h>
#include <time.h>  

using namespace std;

int main()
{
	srand(time(NULL));
	int keys;
	cout << "Enter number of keys to generate: ";
	cin >> keys;
	char c;
	for(int i = 0; i < keys; i++)
	{
			cout << i+1 << ". ";
			for(int J = 0; J < 4; J++)
			{
				c = (rand()%26)+65;
				cout << c;
			}
			cout << endl;
	}
	return 0;
}
