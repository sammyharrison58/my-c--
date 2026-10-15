#include <iostream>
using namespace std;
float calca(float r);
int main()
{
	float radius=5;
	cout<<calca(radius);

	return 0;
}
	float calca(float r)
{
	float area;
	area=3.142*r*r;
	return area;
}
