#include<iostream>
#include<string>
#include<vector>
#include"Card.h"
#include"DeckOfCards.h"

using namespace std;

DeckOfCards::DeckOfCards()
{
    deck.push_back(dealCard());//insert value to end
}

void DeckOfCards::shuffle()
{
    int a;
    for(size_t i=0;i<13*4;++i)//all cards
    {
         Card card;
         a=i%52;
         card=deck[i];
         deck[i]=deck[a];
         deck[a]=card;//rechange the cards
    }
}

Card DeckOfCards::dealCard()
{
    Card card;
    int i;
    for(i=0;i<4;i++)
    {
        card.suit=i;//get the color
        card.face=currentCard;//get the number
    }
    return card;//return the card
}

bool DeckOfCards::moreCard()//if anymore cards
{
    if(currentCard<52)
    {
        currentCard++;
        return true;
    }
    else
        return false;
}

