#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include<vector>
#include "Card.h"
using namespace std;
class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();// a function to shuffle card
    Card dealCard(int);//a function to dearCard
    bool moreCards();
    static const int Cards=52;//there are 52 in all
private:
    vector<Card> deck;
    int currentCard;
};


#endif // DECKOFCARDS_H_INCLUDED
