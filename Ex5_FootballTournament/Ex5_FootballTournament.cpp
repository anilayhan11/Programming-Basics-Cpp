#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string team;
    getline(cin, team);

    int matchesCount;
    cin >> matchesCount;
    int wins = 0;
    int draws = 0;
    int losses = 0;
    int totalScore = 0;

    if (matchesCount == 0)
    {
        cout << team << " hasn't played any games during this season." << endl;
        return 0;
    }

    for (int match = 1; match <= matchesCount; match++)
    {
        char result;
        cin >> result;

        if (result == 'W')
        {
            wins++;
            totalScore += 3;
        }
        else if (result == 'D')
        {
            draws++;
            totalScore += 1;
        }
        else if (result == 'L')
        {
            losses++;
        }
    }

    cout << team << " has won " << totalScore << " points during this season." << endl;
    cout << "Total stats:" << endl;
    cout << "## W: " << wins << endl;
    cout << "## D: " << draws << endl;
    cout << "## L: " << losses << endl;
    cout << "Win rate: " << fixed << setprecision(2) << (wins * 100.00 / matchesCount) << "%" << endl;

    return 0;



}
