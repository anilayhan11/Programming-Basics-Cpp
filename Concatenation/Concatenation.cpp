#include <iostream>
using namespace std;

int main()
{
	string name;
	cin >> name;

	string surname;
	cin >> surname;

	int age;
	cin >> age;

	string town;
	cin >> town;

	//Output: You are <firstName> <lastName>, a <age>-years old person from <town>.
	cout << "You are " << name << " " << surname << ", a " << age << "-years old person from " << town << ".";

}

