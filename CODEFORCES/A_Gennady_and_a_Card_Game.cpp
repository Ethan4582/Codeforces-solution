#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Read the card on the table
    string tableCard;
    cin >> tableCard;

    // Read the five cards in hand
    vector<string> hand(5);
    for (int i = 0; i < 5; ++i) {
        cin >> hand[i];
    }

    // Convert the card on the table to a single string
    string tableCardStr = tableCard;

    // Iterate over the hand to check if any card can be played
    bool canPlay = false;
    for (string card : hand) {
        // Check if any character of the card matches with the table card
        if (card[0] == tableCardStr[0] || card[1] == tableCardStr[1]) {
            canPlay = true;
            break;
        }
    }

    // Output the result
    if (canPlay) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
