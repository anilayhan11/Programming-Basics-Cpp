#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string filmName;
    int days, ticketsPerDay, cinemaPercentage;
    double ticketPrice;

    getline(cin, filmName);
    cin >> days >> ticketsPerDay >> ticketPrice >> cinemaPercentage;

    double totalRevenue = days * ticketsPerDay * ticketPrice;
    double studioProfit = totalRevenue * (1 - cinemaPercentage / 100.0);

    cout << "The profit from the movie " << filmName << " is " << fixed << setprecision(2) << studioProfit << " lv." << endl;

    return 0;
}