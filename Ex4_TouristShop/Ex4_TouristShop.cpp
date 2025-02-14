#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double budget = 0.00;
    double price = 0.00;
    double totalPrice = 0.00;
    string product;
    int counter = 0;

    cin >> budget;

    while (true)
    {
        cin.ignore();
        getline(cin, product);

        if (product == "Stop")
        {
            cout << "You bought " << counter << " products for " << fixed << setprecision(2) << totalPrice << " leva." << endl;
            return 0;
        }

        cin >> price;
        
        counter++;
        if (counter % 3 == 0)
        {
            price /= 2;
        }

        if (budget >= price)
        {
            budget -= price;
            totalPrice += price;
        }
        else
        {
            cout << "You don't have enough money!" << endl;
            cout << "You need " << fixed << setprecision(2) << (price - budget) << " leva!" << endl;
            return 0;
        }
    }


    return 0;
}
