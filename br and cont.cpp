#include <iostream>
using namespace std;
int main()
{
	int rows = 10;
	for(int i = 1; i < rows; i++)
	{
		if(i == 5)continue;
		cout << "step:" << i << endl;
	}



	return 0;
}
