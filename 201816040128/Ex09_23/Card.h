#ifndef CARD_H 
#define CARD_H 

#include <iostream> 
#include <string> 
using namespace std;

class Card
{
	friend class DeckOfCards;
public:
	Card(int = 0, int = 0);
	void toString();

private:
	int face;
	int suit;
	static string face1[13];
	static string suit1[4];
};

#endif
