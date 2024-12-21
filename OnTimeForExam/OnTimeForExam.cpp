#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	int examHour, examMin;
	cin >> examHour >> examMin;

	int studentHour, studentMin;
	cin >> studentHour >> studentMin;

	int examMinTotal = examHour * 60 + examMin;
	int studentMinTotal = studentHour * 60 + studentMin;


	int difference = examMinTotal - studentMinTotal;


	if (difference < 0)
	{
		cout << "Late" << endl;
	}
	else if (difference <= 30)
	{
		cout << "On time" << endl;
	}
	else
	{
		cout << "Early" << endl;
	}


	int hours = abs(difference) / 60;
	int minutes = abs(difference) % 60;

	if (hours > 0)
	{
		cout << hours << ":" << setw(2) << setfill('0') << minutes << " hours";
	}
	else if (minutes > 0)
	{
		cout << minutes << " minutes";
	}


	if (difference < 0)
	{
		cout << " after the start" << endl;
	}
	else if (difference > 0)
	{
		cout << " before the start" << endl;

	}

	return 0;

}
