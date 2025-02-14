#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string contractPeriod, contractType, mobileInternet;
    int monthsCount = 0;
    double fee = 0.00;

    cin >> contractPeriod >> contractType >> mobileInternet >> monthsCount;

    if (contractPeriod == "one")
    {
        if (contractType == "Small")
        {
            fee = 9.98;
        }
        else if (contractType == "Middle")
        {
            fee = 18.99;
        }
        else if (contractType == "Large")
        {
            fee = 25.98;
        }
        else if (contractType == "ExtraLarge")
        {
            fee = 35.99;
        }
    }
    else if (contractPeriod == "two")
    {
        if (contractType == "Small")
        {
            fee = 8.58;
        }
        else if (contractType == "Middle")
        {
            fee = 17.09;
        }
        else if (contractType == "Large")
        {
            fee = 23.59;
        }
        else if (contractType == "ExtraLarge")
        {
            fee = 31.79;
        }

    }

    if (mobileInternet == "yes")
    {
        if (fee <= 10.00)
        {
            fee += 5.50;
        }
        else if (fee <= 30)
        {
            fee += 4.35;
        }
        else
        {
            fee += 3.85;
        }
    }

    if (contractPeriod == "two")
    {
        fee -= fee * 3.75 / 100;
    }

    std::cout << fixed << setprecision(2) << (fee * monthsCount) << " lv." << endl;

}
