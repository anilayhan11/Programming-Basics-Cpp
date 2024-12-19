#include <iostream>
using namespace std;

int main()
{
	string name;
	cin >> name;

	int number;
	cin >> number;

	int totalhours = 3 * number;

	// Output: The architect {името на архитекта} will need {необходими часове} hours to complete {брой на проектите} project/s.
	cout << "The architect " << name << " will need " << totalhours << " hours to complete " << number << " project/s.";

}
