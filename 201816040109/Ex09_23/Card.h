#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
using namespace std;
class Card
{
public:
    Card(int,int);
    string toString();
    int getSuit();
    int getFace();
private:
    int face;//面值
    int suit;//花色
    static string faceList[13];//面值
    static string suitList[4];//花色
};
#endif // CARD_H
