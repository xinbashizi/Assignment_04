
#include "Card.h"
#include<vector>
using std::vector;
#include <iostream>
#include <string>
using namespace std;
#include "DeckOfCards.h"
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i;
    DeckOfCards p;
    p.shuffle();
    p.dealCard1().toString();
       cout <<endl;
    for (i=0;i<10;i++)
    {

        p.dealCard2().toString();
        cout <<endl;
        p.shuffle();
    }
     return 0;
}
