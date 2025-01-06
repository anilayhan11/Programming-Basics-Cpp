#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//    string line;
//    getline(cin, line);
//
//    while (line != "Stop")
//    {
//        cout << line << endl;
//
//        getline(cin, line);
//    }
//
//    return 0;
//}

int main()
{
    string line;

    while (getline(cin, line) && line != "Stop")
    {
        cout << line << endl;
    }

    return 0;
}
