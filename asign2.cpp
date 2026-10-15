#include <iostream>
using namespace std;
class Triangle
{
public:
	int length;
	int width;
	int area;
	void setvalues();
};
void Triangle::setvalues()
{
	cout<<"enter the length:"<<endl;
	cin>>length;
	cout<<"enter the width:"<<endl;
	cin>>width;
	area=width*length;
	cout<<"area = "<<area;
}
int main()
{
	Triangle a;
	a.setvalues();
	
	
	return 0;
}