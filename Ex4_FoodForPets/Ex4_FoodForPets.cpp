#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int days;
    double availableFood = 0.00;
    double totalFoodCat = 0.00;
    double totalFoodDog = 0.00;
    double totalFood = 0.00;
    cin >> days >> availableFood;
    double biscuits = 0.00;

    for (int day = 1; day <= days; day++)
    {
        double dailyFoodDog, dailyFoodCat = 0.00;
        cin >> dailyFoodDog >> dailyFoodCat;

        totalFoodDog += dailyFoodDog;
        totalFoodCat += dailyFoodCat;
        
        totalFood = totalFoodDog + totalFoodCat;

        if (day % 3 == 0)
        {
            biscuits += (dailyFoodDog + dailyFoodCat) * 0.10;
        }
    }

    cout << "Total eaten biscuits: " << round(biscuits) << "gr." << endl;
    cout << fixed << setprecision(2) << totalFood * 100 / availableFood << "% of the food has been eaten." << endl;
    cout << fixed << setprecision(2) << totalFoodDog * 100 / totalFood << "% eaten from the dog." << endl;
    cout << fixed << setprecision(2) << totalFoodCat * 100 / totalFood << "% eaten from the cat." << endl;


}
