#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include <vector>
#include "Card.h"
class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
private:
    vector<Card> deck;//创建一个容器
    int currentCard;//剩余牌数
};
#endif // DECKOFCARDS_H
