#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days, hours = 0;
    cin >> days >> hours;
	double feeTotal = 0.00;
	double feeDaily = 0.00;
	

	for (int day = 1; day <= days; day++)
	{
		for (int hour = 1; hour <= hours; hour++)
		{
			if (day % 2 == 0 && hour % 2 != 0)
			{
				feeDaily += 2.50;
			}
			else if (day % 2 != 0 && hour % 2 == 0)
			{
				feeDaily += 1.25;
			}
			else
			{
				feeDaily += 1.00;
			}
		}
		
		feeTotal += feeDaily;
		cout << "Day: " << day << " - " << fixed << setprecision(2) << feeDaily << " leva" << endl;
		feeDaily = 0.00;

	}

	cout << "Total: " << fixed << setprecision(2) << feeTotal << " leva" << endl;

}