#include <iostream>
using namespace std;
int main()
{
	int score;
	string gender = "M";
	cout << "enter the score [1-100]:";
	cin >> score;
	if (score >= 50)
	{
		if (gender == "M")
		{
			cout << "You have passed the test!";
		}


		else

			if (score >= 60)
			{
				cout << "You have failed the test!";
			}

	}

	return 0;
}
