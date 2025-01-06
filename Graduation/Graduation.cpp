#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int gradeCount = 1, failCount = 0;
    double totalGrade = 0.00;

    bool isFailed = false;

    while (gradeCount <= 12)
    {
        double grade;
        cin >> grade;

        if (grade >= 4.00)
        {
            totalGrade += grade;
            gradeCount++;
        }
        else if (++failCount == 2)
        {
            isFailed = true;
            break;
        }
    }

    if (isFailed)
        cout << name << " has been excluded at " << gradeCount << " grade" << endl;
    else
    {
        double averageGrade = totalGrade / 12;
        cout << name << " graduated. Average grade: " << fixed << setprecision(2) << averageGrade << endl;
    }
}
