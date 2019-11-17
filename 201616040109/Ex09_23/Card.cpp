// Exercise 9.23 Solution:Card.cpp
// Member-function definitions for class Card
#include<string>
#include"Card.h"// include definition of class Card from Card.h
string Card::faces[4]={"Club","Diamond","Heart","Spade"};
string Card::suits[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
Card::Card(int face,int suit)
{
    setFace(face);// initializes face
    setSuit(suit);// initializes face
}
void Card::setFace(int face)
{
    this->face=face;
}
void Card::setSuit(int suit)
{
    this->suit=suit;
}
int Card::getFace()
{
    return face;
}
int Card::getSuit()
{
    return suit;
}
string Card::toString()
{
    return suits[suit]+"of"+faces[face];
}
