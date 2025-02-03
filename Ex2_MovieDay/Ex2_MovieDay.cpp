#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int shootingTime, numberOfScenes, sceneDuration;

    cin >> shootingTime >> numberOfScenes >> sceneDuration;

    double prepTime = 0.15 * shootingTime;
    double totalTime = numberOfScenes * sceneDuration + prepTime;

    if (totalTime <= shootingTime)
    {
        cout << "You managed to finish the movie on time! You have " << round(shootingTime - totalTime) << " minutes left!" << endl;
    }
    else
    {
        cout << "Time is up! To complete the movie you need " << round(totalTime - shootingTime) << " minutes." << endl;
    }

    return 0;
}
