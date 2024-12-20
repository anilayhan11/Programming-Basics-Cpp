#include <iostream>
using namespace std;

int main()
{

	int length, width, heigth;
	cin >> length >> width >> heigth;

	double percentTaken;
	cin >> percentTaken;

	double tankVolume = length * width * heigth;
	double tankLiters = tankVolume / 1000;

	double litersTaken = tankLiters * percentTaken / 100;

	double litersNeeded = tankLiters - litersTaken;

	cout << litersNeeded << endl;

	return 0;
}
