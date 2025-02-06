#include <iostream>
#include <string>
using namespace std;

int main()
{
	string movieTitle;
	getline(cin, movieTitle);
	int counter = 0;
	string bestMovie;
	int bestSum = 0;

	while (movieTitle != "STOP")
	{
		if (counter > 7)
		{
			cout << "The limit is reached." << endl;
			break;
		}

		int currentSum = 0;

		for (size_t i = 0; i < movieTitle.length(); i++) 
		{
			currentSum += movieTitle[i];

			if (movieTitle[i] >= 65 && movieTitle[i] <= 90)
			{
				currentSum -= movieTitle.length();
			}
			else if (movieTitle[i] >= 97 && movieTitle[i] <= 122)
			{
				currentSum -= movieTitle.length() * 2;
			}
		}

		if (currentSum > bestSum)
		{
			bestSum = currentSum;
			bestMovie = movieTitle;
		}


		counter++;
		getline(cin, movieTitle);
	}

	cout << "The best movie for you is " << bestMovie << " with " << bestSum << " ASCII sum." << endl;
}