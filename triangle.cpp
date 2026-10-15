#include <iostream>
using namespace std;
int main()
{
	int rows=5,cols=5;
	for(int i=0;i<rows;i++)
	{
		for(int k=0;k<cols-i;k++)
		{
			cout <<"*"<<" ";
		
		}
		cout<<endl;
		
	}
	
	
	
	 return 0;
}