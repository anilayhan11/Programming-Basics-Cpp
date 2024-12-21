#include <iostream>
using namespace std;

int main()
{
	string shape;
	cin >> shape;

	double area = 0.000;

	if (shape == "square") 
	{
		double side;
		cin >> side;

		area = side * side;
	}
	else if (shape == "rectangle")
	{
		double sideA, sideB;
		cin >> sideA >> sideB;

		area = sideA * sideB;
	}
	else if (shape == "circle")
	{
		double radius;
		cin >> radius;

		const double pi = 3.1415926535;

		area = pi * radius * radius;
	}
	else if (shape == "triangle")
	{
		double side, heigth;
		cin >> side >> heigth;

		area = side * heigth / 2;
	}

	cout.setf(ios::fixed);
	cout.precision(3);

	cout << area << endl;

	return 0;
}
