#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include<string>
#include<vector>
#include"Card.h"

using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();//conversion constructor
    void shuffle();//rechange
    Card dealCard();//function to get the next one
    bool moreCard();//judge
public:
    vector<Card>deck;//定义vector的大小
    int currentCard=0;//currentCard for this DeckOfCards
};


#endif // DECKOFCARDS_H_INCLUDED
