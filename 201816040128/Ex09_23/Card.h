#ifndef CARD_H 
#define CARD_H 

#include <iostream> 
#include <string> 
using namespace std;

class Card
{
public:
	int face;
	int suit;
	Card(int = 0, int = 0);
	void toString();
	static string face1[13];
	static string suit1[4];
};

#endif
