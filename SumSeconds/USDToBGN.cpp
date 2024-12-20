#include <iostream>
using namespace std;

int main()
{
	double usd;
	cin >> usd;

	const double rate = 1.79549;

	double bgn = usd * rate;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << bgn;

	//cout << fixed << setprecision(2) << bgn;

	return 0;

}
