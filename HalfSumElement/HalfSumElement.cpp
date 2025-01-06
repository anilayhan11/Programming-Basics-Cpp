#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int maxNum = INT_MIN;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;

		sum += number;

		if (number > maxNum)
			maxNum = number;
	}

	int diff = sum - maxNum;

	if (diff == maxNum)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << diff << endl;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(maxNum - diff) << endl;
	}

	return 0;

}
