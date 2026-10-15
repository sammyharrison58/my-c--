#include <iostream>
using namespace std;
int fact(int n);
int fact2(int n);
int main()
{
	int num = 6;
	cout << fact(num);

	return 0;
}
int fact(int n)
{

	if(n < 2)
		return 1;
	else
		return n * fact(n - 1);
}
int fact2(int n)
{
	int ans = 1;
	while (n > 1)
	{
		ans = ans * n;
		n--;
	}
	return ans;
}
