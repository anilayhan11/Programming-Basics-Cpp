#include <iostream>
using namespace std;

int main()
{
    string name;
    int maxScore = 0;
    string winner = "";

    while (cin >> name && name != "Stop")
    {
        int score = 0;

        for (int ch = 0; ch < name.length(); ch++)
        {
            int num;
            cin >> num;

            if (name[ch] == num)
            {
                score += 10;
            }
            else
            {
                score += 2;
            }
        }

        if (score >= maxScore)
        {
            maxScore = score;
            winner = name;
        }
    }

    cout << "The winner is " << winner << " with " << maxScore << " points!" << endl;
}
