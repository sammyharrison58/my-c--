#include <iostream>
using namespace std;
float sqme(int n);
int main()
{
	int num = 3;
	cout << sqme(num);

	return 0;
}
float sqme(int n)
{
	cout << "n= " << n << endl;
	if(n > 10000000) return 8;
	return sqme(n * n);
}
