#include <iostream>
using namespace std;

int main()
{
    int rows;
    cin >> rows;

	int result = 0;
	for (int i = 0; i < rows; i++)
	{
		int number;
		cin >> number;

		result += number;
	}

	cout << result << endl;

	return 0;
}
