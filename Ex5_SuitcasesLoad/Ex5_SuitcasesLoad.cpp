#include <iostream>
#include <string>
using namespace std;

int main()
{
    double capacity;
    cin >> capacity;

    int counter = 0;

    while (true)
    {
        string command;
        cin >> command;

        if (command == "End")
        {
            cout << "Congratulations! All suitcases are loaded!" << endl;
            break;
        }

        counter++;
        double volume = stod(command);
        if (counter % 3 == 0)
        {
            volume *= 1.10;
        }

        capacity -= volume;

        if (capacity < 0)
        {
            cout << "No more space!" << endl;
            counter--;
            break;
        }

    }

    cout << "Statistic: " << counter << " suitcases loaded." << endl;
}