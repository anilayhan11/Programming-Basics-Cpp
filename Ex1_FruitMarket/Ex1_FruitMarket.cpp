#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double strawberriesPrice, bananasCount, orangesCount, raspberrıesCount, strawberriesCount;
    cin >> strawberriesPrice >> bananasCount >> orangesCount >> raspberrıesCount >> strawberriesCount;

    double raspberriesPrice = strawberriesPrice * 0.5;
    double orangesPrice = raspberriesPrice * 0.6;
    double bananasPrice = raspberriesPrice * 0.2;

    double finalPrice =
        (strawberriesPrice * strawberriesCount) +
        (raspberriesPrice * raspberrıesCount) +
        (orangesPrice * orangesCount) +
        (bananasPrice * bananasCount);

    cout << fixed << setprecision(2) << finalPrice << endl;

}