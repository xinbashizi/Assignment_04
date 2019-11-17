// Exercise 9.23 Solution:Card.h
#ifndef CARD_H
#define CARD_H
#include<string>
using namespace std;
// Card class definition
class Card
{
public:
    static string faces[4];
    static string suits[13];
    Card(int,int);
    void setFace(int);// function to set face
    void setSuit(int);// function to set suit
    int getFace();// function to get face
    int getSuit();// function to get suit
    string toString();// function to get  suit of face
private:
    int face;//face for the Card
    int suit;//suit for the Card
};
#endif//CARD_H
