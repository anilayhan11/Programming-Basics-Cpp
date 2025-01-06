#include <iostream>
#include <cmath>
using namespace std;

//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 0; i <= n; i += 2)
//	{
//		cout << pow(2, i) << endl;
//	}
//
//	return 0;
//}


int main()
{
	int n;
	cin >> n;

	for (int pow = 0, result = 1; pow <= n; pow += 2, result *= 4)
	{
		cout << result << endl;
	}

	return 0;
}
