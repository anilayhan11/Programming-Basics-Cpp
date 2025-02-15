#include <iostream>
using namespace std;

int main()
{
    int walkMin, walkCount, kcalTaken;
    cin >> walkMin >> walkCount >> kcalTaken;
    int totalMin = walkMin * walkCount;
    int kcalBurned = totalMin * 5;

    if (kcalBurned >= kcalTaken / 2)
    {
        cout << "Yes, the walk for your cat is enough. Burned calories per day: " << kcalBurned << "." << endl;
    }
    else
    {
        cout << "No, the walk for your cat is not enough. Burned calories per day: " << kcalBurned << "." << endl;
    }

    
}