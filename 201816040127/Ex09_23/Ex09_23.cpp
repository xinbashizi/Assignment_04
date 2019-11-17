#include <iostream>
#include "Card.cpp" // include definitions of class Card
#include "DeckOfCards.cpp"//include definitions of class deckOfCards
using namespace std;
int main()
{
    DeckOfCards D;
    cout<<"Deal Cards before shuffle"<<endl;
    D.dealCard(D.Cards);
    D.shuffle();
    cout<<"Deal Cards after shuffle"<<endl;
    D.moreCards();
    return 0;

}
