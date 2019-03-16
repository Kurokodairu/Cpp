#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int num,guess,guesses;

    srand (time(NULL));
    num = rand() % 100 + 1;
    guesses = 0;

    cout << "Guess a random number ranging from 1 - 100" << endl;
    do {
    if(!(cin >> guess)) {
        cout << "Hint: This only works with numbers..." << endl;
    } else {
        if (num < guess) {
            cout << "The number is... Lower than "  << guess << endl;
            guesses++;
        } else if (num > guess) {
            cout << "The number is... Higher than " << guess << endl;
            guesses++;
        }
    }
   } while (num != guess);
    cout << "Congratulations the number was: " << num << endl << "You used " << guesses << " tries in total." << endl;
    return 0;
}
