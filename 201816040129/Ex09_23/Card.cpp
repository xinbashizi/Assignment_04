#include<iostream>
#include<string>

#include"Card.h"

using namespace std;

string Card::suit1[4]={"Spade","Heart","Diamond","Club"};//four colors of cards
string Card::face1[13]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen"};//the numbers of cards
Card::Card(int face1,int suit1)
{
     face=face1;//assign the face1 to the face
     suit=suit1;//assign the suit1 to the suit
}
void Card::toString()
{
    string a,b;
    a=face1[face];//all numbers
    b=suit1[suit];//all colors
    cout<<a<<" "<<"of"<<" "<<b<<endl;//output all cards
}
