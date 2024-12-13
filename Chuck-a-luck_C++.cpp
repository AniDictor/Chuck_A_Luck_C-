#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << string(23, ' ') << "CHUCK-A-LUCK" << endl;
    cout << string(20, ' ') << "CREATIVE COMPUTING" << endl;
    cout << string(18, ' ') << "MORRISTOWN, NEW JERSEY" << endl << endl << endl;

    cout << "CHOOSE A NUMBER FROM 1 TO 6. I WILL ROLL 3 DICE." << endl;
    cout << "IF YOUR NUMBER MATCHES 1 DIE, I PAY OFF EVEN MONEY." << endl;
    cout << "TWO DICE, 2:1    3 DICE, 3:1" << endl << endl;

    int money = 500;
    while (money > 0) {
        cout << "YOU HAVE $" << money << ". MAKE A BET." << endl;
        cout << "?";

        int bet;
        cin >> bet;

        if (bet > money) {
            cout << "I DON'T TAKE I.O.U's !!!!" << endl;
            continue;  
        }
        if (bet <= 0) {
            cout << "DON'T GET CUTE!!!" << endl;
            continue;
        }
        if (bet * 100 != int(bet * 100)) {
            cout << "DON'T GET CUTE!!!" << endl;
            continue;
        }
        int number = 0;
        while(number == 0){
            cout << "CHOOSE A NUMBER? ";
            cin >> number;
    
            if (number < 1 || number > 6 || (int)number != number) {
                cout << "CHEATER!!!!!" << endl;
                number = 0;
            }
        }

        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        int die3 = rand() % 6 + 1;

        cout << die1 << "   " << die2 << "   " << die3 << endl;


        int matches = 0;
        if (die1 == number) matches++;
        if (die2 == number) matches++;
        if (die3 == number) matches++;

        cout << "YOU'VE MATCHED " << matches << " TIMES." << endl;

        if (matches == 1) {
            cout << "YOU'VE WON $" << bet << endl;
            money += bet;
        } else if (matches == 2) {
            cout << "YOU'VE WON $" << bet * 2 << endl;
            money += bet * 2;
        } else if (matches == 3) {
            cout << "YOU'VE WON $" << bet * 3 << endl;
            money += bet * 3;
        } else {
            cout << "YOU LOOSE $ " << bet << endl << endl;
            money -= bet;
            if (money <= 0) {
                break;
            }
        }
    }

    return 0;
}