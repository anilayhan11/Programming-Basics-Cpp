#include <iostream>
#include <string>
using namespace std;

int main()
{
    int capacity;
    cin >> capacity;
    cin.ignore();

    string command;
    int totalViewers = 0;
    int ticketsTotalPrice = 0;

    while (getline(cin, command) && command != "Movie time!")
    {
        int currentViewers = stoi(command);

        if (totalViewers + currentViewers > capacity)
        {
            cout << "The cinema is full." << endl;
            break;
        }

        totalViewers += currentViewers;
        ticketsTotalPrice += currentViewers * 5;

        if (currentViewers % 3 == 0)
        {
            ticketsTotalPrice -= 5;
        }

    }

    if (command == "Movie time!")
    {
        cout << "There are " << (capacity - totalViewers) << " seats left in the cinema." << endl;
    }

    cout << "Cinema income - " << ticketsTotalPrice << " lv." << endl;

    return 0;
}