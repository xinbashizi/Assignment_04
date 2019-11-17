#include"Card.h"   
#include <string>   
#include <iostream>   
using namespace std;

string Card::suit1[4] = { "H1","H2","H3","H4" };
string Card::face1[13] = { "1","2","3","4","5","6","7","8","9","10","11","12","13" };
Card::Card(int a, int b)
{
	face = a;
	suit = b;
}
 //看网上的代码
void Card::toString()
{
	cout << face1[face] << " of " << suit1[suit];
}
