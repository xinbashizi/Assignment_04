#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include<iostream>
#include<vector>
#include"Card.h"
using namespace std;


class DeckOfCards
{
public:
	DeckOfCards();
	void shuffle();
	Card dealCard1();
	Card dealCard2();
	bool moreCards();


private:
	vector<Card>deck;
	size_t currentCard;
};
#endif
