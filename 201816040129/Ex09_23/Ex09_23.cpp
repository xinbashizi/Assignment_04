#include <iostream>
#include<vector>
#include<string>
#include"Card.h"
#include"DeckOfCards.h"
using namespace std;

int main()
{
    for(int i=0;i<13;i++)//all numbers
    {
        for(int j=0;j<4;j++)//all colors
        {
            int a,b;
            a=i;
            b=j;
            Card card(a,b);
            card.toString();//output all cards
        }
    }
    DeckOfCards deckofcards;
}
