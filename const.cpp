#include <iostream>
using namespace std;
float calcv(float &r, float &h);
int main()
{
	float radius=5 ,height=10;
	cout<<calcv(radius,height)<<endl;
	cout<<radius;

	return 0;
}
	float calcv(const float &r, const float &h)
{
	float vol;
	vol=3.142*r*r*h;
	r=300;
	return vol;
}
