#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1 kg = 1000 gr.
    int totalFoodKg = 0;
    string command;

    cin >> totalFoodKg;
    int totalFoodGr = totalFoodKg * 1000;
    int totalEatenFoodGr = 0;

    while (true)
    {
        cin >> command;
        

        if (command != "Adopted")
        {
            int eatenFoodGr = stoi(command);
            totalEatenFoodGr += eatenFoodGr;
        }
        else
        {
            break;
        }
    }

    if (totalFoodGr >= totalEatenFoodGr)
    {
        cout << "Food is enough! Leftovers: " << (totalFoodGr - totalEatenFoodGr) << " grams." << endl;
        return 0;
    }
    else
    {
        cout << "Food is not enough. You need " << (totalEatenFoodGr - totalFoodGr) << " grams more." << endl;
        return 0;
    }

    return 0;
}
