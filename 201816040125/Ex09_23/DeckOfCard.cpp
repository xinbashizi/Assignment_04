#include"DeckOfCards.h"
#include"Card.h"
#include<ctime>
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

DeckOfCards::DeckOfCards()
:currentCard(0)
{
    while(moreCards())
    {
        deck.push_back(dealCard1());
        currentCard++;
    }


}
void DeckOfCards::shuffle()
{
     srand(time(0));
    for(int i=0;i<52;i++)
    {    Card card;
        int a=rand()%52;
        card=deck[i];
        deck[i]=deck[a];
        deck[a]=card;
    }
}
Card DeckOfCards::dealCard1()
{

         Card a;
        if(currentCard>=0&&currentCard<13)
        {
            a.suit=0;
            a.face=currentCard;
        }
        if(currentCard>=13&&currentCard<26)
        {
            a.suit=1;
            a.face=currentCard-13;
        }
        if(currentCard>=26&currentCard<39)
        {
            a.suit=2;
            a.face=currentCard-26;
        }
        if(currentCard>=39&&currentCard<52)
        {
            a.suit=3;
            a.face=currentCard-39;
        }
        return a;
    }


bool DeckOfCards::moreCards()
{
    if(currentCard<52)
        return true;
    else
        return false;
}

Card DeckOfCards::dealCard2()
{
    srand(time(0));
    return deck[rand()%52];
}
