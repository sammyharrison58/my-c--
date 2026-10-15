#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	char x;

	do
	{
		cout<<"a:";
		cin>>a;
		cout<<"b:";
		cin>>b;
		cout<<"c:";
		cin>>c;
	
		if ((a*x^2)+x*b+c!=0)
	{
		cout<<"wrong  variables"<<endl;
	}
	else
	{
		cout<<"correct"<<endl;
	}
	
	}while((a*x^2)+x*b+c!=0);
	
	return 0;
}