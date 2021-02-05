#include <iostream>
using namespace std;

int main()
{
    string mystring = "I Kinda Regret Doing This To Be Honest, But Hopefully I Won't Accidentally Delete This";
    for(int i = 0; i < mystring.length(); i++)
    {
    	if(mystring[i] != ' ')
    	{
			for(int j = 0; j <= i; j++)
	    	{
	    		cout << mystring[j];
			}
			cout << endl;
		}
	}
	for(int i = mystring.length()-2; i >= 0; i--)
    {
    	if(mystring[i] != ' ')
    	{
			for(int j = 0; j <= i; j++)
	    	{
	    		cout << mystring[j];
			}
			cout << endl;
		}
	}
	return 0;
}
