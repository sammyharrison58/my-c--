#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "enter the score [1-100]:";
	cin >> score;
	switch(score)
	{
	case 0 ... 39:
		cout << "Grade F";
		break;
	case 40 ... 49:
		cout << "Grade=D";
		break;
	case 50 ... 59:
		cout << "Grade=D";
		break;
	case 60 ... 69:
		cout << "Grade=B";
		break;
	case 70 ... 100:
		cout << "Grade=A";
		break;
	default:
		cout << "Invalid score";
	}


	return 0;
}
