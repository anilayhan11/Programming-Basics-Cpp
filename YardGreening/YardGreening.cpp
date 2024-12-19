#include <iostream>
using namespace std;
int main()
{
	double pricePerM2 = 7.61;
	
	double area;
	cin >> area;

	double totalPrice = pricePerM2 * area;
	double discount = totalPrice * 0.18;
	double finalPrice = totalPrice - discount;


	cout << "The final price is: " << finalPrice << " lv." << endl;
	cout << "The discount is: " << discount << " lv." << endl;

}
