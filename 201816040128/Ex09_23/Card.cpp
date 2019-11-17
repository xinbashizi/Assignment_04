#include"Card.h"   
#include <string>   
#include <iostream>   
using namespace std;

string Card::suit1[4] = { "H1","D2","C3","S4" };
string Card::face1[13] = { "One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };
Card::Card(int a, int b)
{
	face = a;
	suit = b;
}

void Card::toString()
{
	cout << face1[face] << " of " << suit1[suit];
}
