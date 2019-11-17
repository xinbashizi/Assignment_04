#include <iostream>
#include <vector>
#include <time.h>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards()
{
    currentCard=51;//0-51总共52张牌
    for(int i=0; i<13; i++)//把52张牌放进deck中
    {
        for(int j=0; j<4; j++)
        {
            Card flag(i,j);
            deck.push_back(flag);
        }
    }
}
void DeckOfCards::shuffle()//洗牌
{
    srand(time(NULL));
    for(int i=0; i<52; i++)
    {
        int flag=(rand()%52);
        swap(deck[i],deck[flag]);//随机生成一个52以内的数字然后交换两张牌
    }
}
Card DeckOfCards::dealCard()
{
    return deck[currentCard--];;
}
bool DeckOfCards::moreCards()//判断是否还有牌，currentCard为-1说明无牌
{
    if(currentCard==-1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
