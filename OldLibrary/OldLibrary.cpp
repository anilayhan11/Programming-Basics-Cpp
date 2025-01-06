#include <iostream>
#include <string>
using namespace std;

int main()
{
    string favBook;
    getline(cin, favBook);

    int bookCounter = 0;

    while (true)
    {
        string currentBook;
        getline(cin, currentBook);

        if (currentBook == favBook)
        {
            cout << "You checked " << bookCounter << " books and found it." << endl;
            return 0;
        }

        if (currentBook == "No More Books")
        {
            cout << "The book you search is not here!" << endl;
            cout << "You checked " << bookCounter << " books." << endl;
            return 0;
        }

        bookCounter++;

    }
}
