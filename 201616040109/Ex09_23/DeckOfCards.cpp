// Exercise 9.23 Solution:DeckOfCards.cpp
// Member-function definitions for class DeckOfCards
#include"DeckOfCards.h"// include definition of class DeckOfCards from DeckOfCards.h
#include"Card.h"// include definition of class Card from Card.h
#include <vector>
DeckOfCards::DeckOfCards(){
    setCurrentCard(0);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<13;j++)
        {
            Card card(i,j);
            deck.push_back(card.toString());
        }
    }
}
void DeckOfCards::setCurrentCard(int current)
{
    currentCard=current;
}
int DeckOfCards::getCurrentCard()
{
    return currentCard;
}
void DeckOfCards::shuffle()
{
    for(size_t i=0;i<deck.size();i++)
    {
        do
        {
            currentCard=rand()%52;
            swap(deck[currentCard],deck[i]);
        }while(!moreCards());

    }

}
string DeckOfCards::dealCard()
{
    return deck[currentCard];
}
bool DeckOfCards::moreCards()
{
    if(dealCard()=="")
    {
        return false;
    }
        return true;
}
