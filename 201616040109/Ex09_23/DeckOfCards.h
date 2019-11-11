// Exercise 9.23 Solution:DeckOfCards.h
#include"Card.h"
#include<vector>
class DeckOfCards
{

public:
    DeckOfCards();// default constructor that initializes the Cards in the deck.
    void setCurrentCard(int);// function to set the currentCard
    int getCurrentCard();// function to get the course name
    void shuffle();// function to shuffle
    string dealCard();// function to return the next Card object from the deck.
    bool moreCards();//function to return a bool value indicating whether there are more Cards to deal.
    vector<string> deck;
private:
    int currentCard;//representing the next card to deal.
};
