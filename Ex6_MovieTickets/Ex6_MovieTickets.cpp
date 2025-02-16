#include <iostream>
using namespace std;

int main()
{
    int a1, a2, n;
    cin >> a1 >> a2 >> n;

    char symbol1 = ' ';
    int symbol2 = 0;
    int symbol3 = 0;
    int symbol4 = 0;

    for (int i = a1; i <= a2 - 1; i++)
    {
        symbol1 = i;

        for (int i = 1; i <= n-1; i++)
        {
            symbol2 = i;

            for (int i = 1; i <= n / 2 - 1; i++)
            {
                symbol3 = i;
                symbol4 = symbol1;

                bool rule1 = symbol1 % 2 != 0;
                bool rule2 = (symbol1 + symbol2 + symbol3) % 2 != 0;

                if (rule1 && rule2)
                {
                    cout << symbol1 << "-" << symbol2 << symbol3 << symbol4 << endl;
                }
            }
        }
    }
}
