#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

Card::Card(int f,int s)
{
    face=f;
    suit=s;
}
string Card::toString()
{
    return (faceList[face]+" of "+suitList[suit]);
}
int Card::getSuit()
{
    return suit;
}
int Card::getFace()
{
    return face;
}
string Card::faceList[13]= {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};//十三种面值
string Card::suitList[4]= {"Spade","Heart","Diamond","Club"};//四种花色
