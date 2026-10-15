#include <iostream>
using namespace std;
int main()
{
	int row=6,colm=0;
	for (int i=0;i<row;i++)
	{
		for(int v=0;v<colm+i;v++)
		{
				cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}