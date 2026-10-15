#include <iostream>
using namespace std;
int main()
{
	int marks[5], sum = 0;
	float avg;
	for(int i = 0; i < 5; i++)
	{
		cin >> marks[i];
		sum += marks[i];
	}
	avg=sum/5;
	cout<<"average"<<avg;

	return 0;
}
