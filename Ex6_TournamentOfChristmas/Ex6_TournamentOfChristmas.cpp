#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int days;
    cin >> days;

    double moneyTotal = 0.00;
    int winsTotal = 0;
    int lossesTotal = 0;

    for (int day = 1; day <= days; day++)
    {
        double moneyDaily = 0.00;
        int winsDaily = 0;
        int lossesDaily = 0;

        while (true) 
        {
            string sport;
            cin.ignore();
            getline(cin, sport);

            if (sport == "Finish")
            {
                break;
            }

            string result;
            cin >> result;

            if (result == "win")
            {
                winsDaily++;
                winsTotal++;
                moneyDaily += 20.00;
            }
            else if (result == "lose")
            {
                lossesDaily++;
                lossesTotal++;
            }
        }    

        if (winsDaily > lossesDaily)
        {
            moneyDaily *= 1.10;
        }

        moneyTotal += moneyDaily;
    }

    if (winsTotal > lossesTotal)
    {
        moneyTotal *= 1.20;

        cout << "You won the tournament! Total raised money: " << fixed << setprecision(2) << moneyTotal << endl;
    }
    else
    {
        cout << "You lost the tournament! Total raised money: " << fixed << setprecision(2) << moneyTotal << endl;
    }
}
