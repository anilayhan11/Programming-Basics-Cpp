#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string bestWord = "";
    int bestPower = 0;
    string vowels = "aeiouyAEIOUY";

    while (getline(cin, word)) {
        if (word == "End of words") {
            break;
        }

        int asciiSum = 0;
        for (char ch : word) {
            asciiSum += static_cast<int>(ch);
        }

        int power = 0;
        if (word[0] == 'a' || word[0] == 'A' ||
            word[0] == 'e' || word[0] == 'E' ||
            word[0] == 'i' || word[0] == 'I' ||
            word[0] == 'o' || word[0] == 'O' ||
            word[0] == 'u' || word[0] == 'U' ||
            word[0] == 'y' || word[0] == 'Y') {

            power = asciiSum * word.length();
        }
        else {
            power = asciiSum / word.length();
        }

        if (power > bestPower) {
            bestPower = power;
            bestWord = word;
        }
    }

    cout << "The most powerful word is " << bestWord << " - " << bestPower << endl;

    return 0;


}
