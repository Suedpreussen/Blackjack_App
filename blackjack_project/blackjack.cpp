/*
BLACKJACK

1 to 8 decks, each consisting of 52 cards:
4 courts, in each we have got: an ace, cards 2 through 10, jack, queen and king

2 through 10 count at face value, i.e. a 2 counts as two, a 9 counts as nine.
Face cards (J,Q,K) count as 10.
Ace can count as a 1 or an 11 depending on which value helps the hand the most.

5 to 9 players play against the dealer

The goal is to have the highest value but not exceeding 21
*/

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;


void print(string text){
    cout << text << "\n";
}

class Card{
public:
    string name_of_card;
    string name_of_court;
    int value;

    Card(string name, string court, int val){
        this->name_of_card = name;
        this->name_of_court = court;
        this->value = val;
    }
};

class Deck{
public:
    vector<Card*> cards_in_deck;
    int deck_id;
    Deck(int id){
        this->deck_id = id;

        // loop over four courts
        // 0 - spades, 1 - hearts, 2 - diamonds, 3 - clubs
        int count = 0;
        string name_of_court;
        string name_of_card;
        int val;
        for(int i = 0; i < 4;i++) {
 
            if (i == 0){
               name_of_court = "spades";
            }
            if (i == 1){
                name_of_court = "hearts";
            }
            if (i == 2){
                name_of_court = "diamonds";
            }
            if (i == 3){
                name_of_court = "clubs";
            }

            for(int j = 0; j < 13; j++){



                Card *card = new Card("a", name_of_court, 1);
                cards_in_deck.push_back(card);  
                count++;
            }
        }
    }

};

class MultipleDecks{

};

class Player{
    /*
    public:
        int points;
        vector<Card> cards_on_hand;
        Player(){
        }
        void calculatePoints(Card cards_on_hand[]){
            int cards_count = sizeof(cards_on_hand) / sizeof(Card);
            int tempPoints = 0;
            while (cards_count > 0) {
                tempPoints += cards_on_hand[cards_count].value;
                cards_count--;
            }
             points = tempPoints;
        }
        */
};

class Dealer{

};

class TheGame{

};


int main() {
    Deck deck1(1);
    cout << deck1.deck_id << "\n";
    cout << deck1.cards_in_deck[0] << "\n";
    return 0;
}
