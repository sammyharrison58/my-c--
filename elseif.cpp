#include <iostream>
using namespace std;
int main()
{
	int score;
	string gender="M";
	cout << "enter the score [1-100]:";
	cin >> score;
	if(score<40)
		cout<<"Grade=F";
	else if (score<50)
		cout<<"Grade=D";
	else if (score<60)
		cout<<"Grade=C";
	else if (score<70)
		cout<<"Grade=B";
	else if (score<=100)
		cout<<"Grade=A";
	else
		cout<<"invalid score";
	
	return 0;
}