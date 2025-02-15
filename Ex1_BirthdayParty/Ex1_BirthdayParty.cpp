#include <iostream>
using namespace std;

int main()
{
    double rent;
    cin >> rent;

    double cake = rent * 0.20;
    double beverages = cake * 0.55;
    double animator = rent / 3;

    double totalExpenses = rent + cake + beverages + animator;

    cout << totalExpenses;
}
