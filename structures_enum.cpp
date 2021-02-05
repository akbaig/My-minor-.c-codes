#include <iostream>

using namespace std;

enum face { clubs, diamonds, hearts= 3, spades };

struct card
{
	int number;
	face suit;
};

int main()
{
	card card1 = {1,spades}, card2;
	card2.number = 2;
	card2.suit = clubs;
	
	cout << "Number of card1: " << card1.number << ", Suit of card1: " << card1.suit;
	return 0;

}
