#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	double budget;
	int seriesCount;
	double moneySpent = 0.00;

	cin >> budget >> seriesCount;
	cin.ignore();

	for (int i = 1; i <= seriesCount; i++)
	{
		string seriesName;
		double seriesPrice;

		getline(cin, seriesName);
		cin >> seriesPrice;
		cin.ignore();

		if (seriesName == "Thrones") 
		{
			seriesPrice *= 0.5;
		}
		else if (seriesName == "Lucifer")
		{
			seriesPrice *= 0.6;
		}
		else if (seriesName == "Protector")
		{
			seriesPrice *= 0.7;
		}
		else if (seriesName == "TotalDrama")
		{
			seriesPrice *= 0.8;
		}
		else if (seriesName == "Area")
		{
			seriesPrice *= 0.9;
		}

		moneySpent += seriesPrice;
	}

	if (budget >= moneySpent)
	{
		cout << "You bought all the series and left with " << fixed << setprecision(2) << (budget - moneySpent) << " lv." << endl;
	}
	else
	{
		cout << "You need " << fixed << setprecision(2) << (moneySpent - budget) << " lv. more to buy the series!" << endl;
	}
}
