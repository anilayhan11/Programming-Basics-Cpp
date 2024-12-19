#include <iostream>
using namespace std;
int main()
{
	double pricePerM2 = 7.61;
	
	double area;
	cin >> area;

	double finalPrice = pricePerM2 * area * 0.82;
	double discount = pricePerM2 * area * 0.18;

	cout << "The final price is: " << finalPrice << " lv.\n";
	cout << "The discount is: " << discount << " lv.";

}
