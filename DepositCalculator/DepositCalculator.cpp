#include <iostream>
using namespace std;

int main()
{

	//сума = депозирана сума + срок на депозита * ((депозирана сума * годишен лихвен процент) / 12)
	double depositSum;
	cin >> depositSum;

	int depositTermInMonths;
	cin >> depositTermInMonths;

	double annualInterestRate;
	cin >> annualInterestRate;

	double annualInterestRatePercent = annualInterestRate / 100;


	double totalSum = depositSum + depositTermInMonths * ((depositSum * annualInterestRatePercent) / 12);

	cout << totalSum << endl;

	return 0;

}

