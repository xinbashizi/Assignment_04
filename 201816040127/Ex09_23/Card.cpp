#include <iostream>
using namespace std;

#include "Card.h"

Card::Card(int faceN,int suitN)//
{
    face=faceN;
    suit=suitN;
}// end Card constructor

int Card::getFace()
{
    return face;
}//function to getFace
int Card::getSuit()
{
    return suit;
}//function to getSuit

const string Card::faceN[Faces]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

const string Card::suitN[Suits]={"heart","diamond","club","spade"};

string Card::toString()
{
    return faceN[face]+"of"+suitN[suit];
}//function to combine face and suit
