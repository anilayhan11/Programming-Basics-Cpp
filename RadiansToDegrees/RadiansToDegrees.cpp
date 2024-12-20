#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//deg = rad * 180/Pi

	double rad;
	cin >> rad;

	double deg = rad * 180 / M_PI;

	cout << round(deg) << endl;

	return 0;

}
