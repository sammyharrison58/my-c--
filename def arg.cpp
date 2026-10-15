#include <iostream>
using namespace std;
float calcv(float r, float h);
int main()
{
	float radius=5 ,height=10;
	cout<<calcv(radius,height);

	return 0;
}
	float calcv(float r, float h)
{
	float vol;
	vol=3.142*r*r*h;
	return vol;
}
