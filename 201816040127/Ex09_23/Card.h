#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include<string>

using namespace std;
class Card
{
public:
    static const int Faces=13;
    static const int Suits=4;
    Card(int ,int );//constructor initialize Card
    int getFace();//method to get getFace
    int getSuit();// method to getSuit
    string toString();//function to return Card
private:
    int face,suit;
    static const string faceN[Faces];
    static const string suitN[Suits];
};

#endif // CARD_H_INCLUDED
