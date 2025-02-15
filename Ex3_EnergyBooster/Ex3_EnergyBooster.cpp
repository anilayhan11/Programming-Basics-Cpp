#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string fruit, setSize;
    int setsCount = 0;
    cin >> fruit >> setSize >> setsCount;
    double totalCost = 0.00;

    if (fruit == "Watermelon")
    {
        if (setSize == "small")
        {
            totalCost += 56.00 * 2;
        }
        else if (setSize == "big")
        {
            totalCost += 28.70 * 5;
        }
    }
    else if (fruit == "Mango")
    {
        if (setSize == "small")
        {
            totalCost += 36.66 * 2;
        }
        else if (setSize == "big")
        {
            totalCost += 19.60 * 5;
        }
    }
    else if (fruit == "Pineapple")
    {
        if (setSize == "small")
        {
            totalCost += 42.10 * 2;
        }
        else if (setSize == "big")
        {
            totalCost += 24.80 * 5;
        }
    }
    else if (fruit == "Raspberry")
    {
        if (setSize == "small")
        {
            totalCost += 20.00 * 2;
        }
        else if (setSize == "big")
        {
            totalCost += 15.20 * 5;
        }
    }

    totalCost *= setsCount;

    if (totalCost >= 400.00 && totalCost <= 1000.00)
    {
        totalCost *= 0.85;
    }
    else if (totalCost > 1000.00)
    {
        totalCost *= 0.50;
    }

    cout << fixed << setprecision(2) << totalCost << " lv." << endl;

}
