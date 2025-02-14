#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double budget, fuelLiters = 0;
	string day;
	double fuelPricePerLt = 2.10;
	double tourGuidePrice = 100.00;

	cin >> budget >> fuelLiters >> day;

	double expenses = (fuelLiters * fuelPricePerLt) + tourGuidePrice;

	if (day == "Saturday")
	{
		expenses *= 0.90;
	}
	else if (day == "Sunday")
	{
		expenses *= 0.80;
	}

	if (budget >= expenses)
	{
		cout << "Safari time! Money left: " << fixed << setprecision(2) << (budget - expenses) << " lv." << endl;
	}
	else
	{
		cout << "Not enough money! Money needed: " << fixed << setprecision(2) << (expenses - budget) << " lv." << endl;
	}
}
