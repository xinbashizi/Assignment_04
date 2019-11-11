// Exercise 9.23 Solution: Ex09_23.cpp
// Test program for modified DeckOfCards class.
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include"DeckOfCards.h"
using namespace std;
int main()
{
    DeckOfCards deckOfCards;
    deckOfCards.shuffle();
   for(size_t i=0;i<deckOfCards.deck.size();i=i+2)
    {
        cout <<setw(10)<<deckOfCards.deck[i]<<setw(15)<<deckOfCards.deck[i+1]<<endl;
    }
    return 0;
}
