#include <iostream>
using namespace std;
class Triangle
{
public:
	int length;
	int width;
	void setvalues();
};
void Triangle::setvalues()
{
	length=3;
	width=5;
	cout<<"length = "<<length<<endl;
	cout<<"width = "<<width<<endl;
}
int main()
{
	Triangle a;
	a.setvalues();
	cout<<"lenght="<<a.length;
	
	
	return 0;
}