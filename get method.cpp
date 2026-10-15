#include <iostream>
using namespace std;
class Triangle
{
private:
	int length;
	int width;
public:
	void setvalues(int , int);
	int getlength();
};
void Triangle::setvalues(int x, int y)
{
	length=x;
	width=y;
}
int Triangle::getlength()
{
	return length;
}
int main()
{
	Triangle t;
	int a=6,b=7;
	t.setvalues(a,b);
	cout<<"lenght="<<t.getlength();
	
	
	return 0;
}