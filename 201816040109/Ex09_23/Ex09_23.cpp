#include <iostream>
#include <string>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;
int main()
{
    DeckOfCards deck;
    deck.shuffle();

    vector<Card> a,b,c,d;
    while(deck.moreCards())//给a,b,c,d四人轮流发牌
    {
        a.push_back(deck.dealCard());
        b.push_back(deck.dealCard());
        c.push_back(deck.dealCard());
        d.push_back(deck.dealCard());
    }
    cout<<"a's cards are:"<<endl;//输出a所有的牌
    for(Card card:a)
    {
        cout<<card.toString()<<endl;
    }
    cout<<"\nb's cards are:"<<endl;//输出b所有的牌
    for(Card card:b)
    {
        cout<<card.toString()<<endl;
    }
    cout<<"\nc's cards are:"<<endl;//输出c所有的牌
    for(Card card:c)
    {
        cout<<card.toString()<<endl;
    }
    cout<<"\nd's cards are:"<<endl;//输出d所有的牌
    for(Card card:d)
    {
        cout<<card.toString()<<endl;
    }

}
