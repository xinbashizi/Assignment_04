#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include<string>
using namespace std;

class Card
{
    friend class DeckOfCards;//friend
public:
    Card(int=0,int=0);//conversion constructor
    void toString();// function to get the cards
private:
    int face;//number for this Card
    int suit;//color for this Card
    static string face1[13];
    static string suit1[4];
};


#endif // CARD_H_INCLUDED
