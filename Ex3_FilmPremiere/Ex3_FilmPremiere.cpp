#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string movie, package;
    int ticketCount;

    getline(cin, movie);
    getline(cin, package);
    cin >> ticketCount;

    double bill = 0.00;

    if (movie == "John Wick")
    {
        if (package == "Drink")
        {
            bill = ticketCount * 12;
        }
        else if (package == "Popcorn")
        {
            bill = ticketCount * 15;
        }
        else if (package == "Menu")
        {
            bill = ticketCount * 19;
        }

    }
    else if (movie == "Star Wars")
    {
        if (package == "Drink")
        {
            bill = ticketCount * 18;
        }
        else if (package == "Popcorn")
        {
            bill = ticketCount * 25;
        }
        else if (package == "Menu")
        {
            bill = ticketCount * 30;
        }

        if (ticketCount >= 4)
        {
            bill *= 0.70;
        }
    }

    else if (movie == "Jumanji")
    {
        if (package == "Drink")
        {
            bill = ticketCount * 9;
        }
        else if (package == "Popcorn")
        {
            bill = ticketCount * 11;
        }
        else if (package == "Menu")
        {
            bill = ticketCount * 14;
        }

        if (ticketCount == 2)
        {
            bill *= 0.85;
        }
    }


    cout << "Your bill is " << fixed << setprecision(2) << bill << " leva." << endl;

    return 0;

}