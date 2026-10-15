#include <iostream>
using namespace std;
int fact(int n);
int main()
{
	int num = 6;
	cout << fact(num);

	return 0;
}
int fact(int n)
{
	cout << "n= " << n << endl;
	if(n < 2) return 1;
	else
		return n*fact(n -1);
}
