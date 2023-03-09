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

void print(std::string text){
    std::cout << text << "\n";
}

struct Card{
    std::string name_of_card;
    std::string name_of_court;
    int value;

    Card(){

    }

};

struct Deck{
    Deck(){
        int deck_id;
        Card deck_elements_array[52];
        // loop over four courts
        // 0 - spades, 1 - hearts, 2 - diamonds, 3 - clubs
        int count = 0;
        for(int i = 0; i < 4;i++) {
            if (i == 0){
                deck_elements_array[count].name_of_court = "spades";
            }
            if (i == 1){
                deck_elements_array[count].name_of_court = "hearts";
            }
            if (i == 2){
                deck_elements_array[count].name_of_court = "diamonds";
            }
            if (i == 3){
                deck_elements_array[count].name_of_court = "clubs";
            }
            for(int j = 0; j < 13; j++){

                count++;
            }
        }
    }

};

struct MultipleDecks{

};

class Player{
    public:
        int points;
        Player(){
            Card cards_on_hand[5];
            int points;
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
};

class Dealer{

};

class TheGame{

};


int main() {
    print("haha");
    return 0;
}
