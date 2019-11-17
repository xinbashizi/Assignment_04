#include <iostream>
using namespace std;

#include "DeckOfCards.h"
#include "Card.h"
#include <string.h>
DeckOfCards::DeckOfCards()
{
    for(int i=0;i<Cards;i++)
    {
        Card card(i%Card::Faces,i/Card::Faces);//借鉴的老师代码，我也不懂
        deck.push_back(card);//push_back
    }

}
void DeckOfCards::shuffle()
{
    int currentCard=0;
    int swapD[Cards];
    for(unsigned first=0;first<deck.size();++first)//也是看的老师的代码
    {
        unsigned second = rand()%deck.size();

    }
    for(int i=0;i<Cards;i++)
    {
        Card swapCard(0,0);//swapCard which can swap deck[i] and deck[swapD[i]
        swapCard=deck[i];
        deck[i]=deck[swapD[i]];
        deck[swapD[i]]=swapCard;
    }

}
Card DeckOfCards::dealCard(int a)
{
    for(int i=0;i<a;i++)
    {
        cout<<deck[i].toString()<<endl;
        if((i+1)%13==0)
            cout<<endl;
    }


}
bool DeckOfCards::moreCards()
{
    for(int i=0;i<Cards-1;++i)
    {
        for(int j=0;j<Cards-2;++j)
        {
            if(strcmp("deck[i].toString()","deck[j].toString()")==0)
            {
                return false;
            }

        }
    }
}
