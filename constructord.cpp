#include <iostream>
using namespace std;
class shape
{
public:
	float len,wid,height,radius;
	int sides;
	float getArea();
	shape();
	shape(float g);
	shape(int s, float g);	//func ovlod
	shape(int s, float g, float w);
	shape(shape & orig);
};
float shape::getArea()
{
	
	return 10;
}
shape::shape()
{
	sides=0;wid=0;len=0;
	cout<<"creating a shape"<<endl;
}
shape::shape(float g)
{
	sides=0;wid=0;len=g;
	cout<<"creating a circle"<<endl;
}
shape::shape(int s, float g)
{
	sides=s;wid=0;len=g;
	cout<<"creating a square"<<endl;
}
shape::shape(int s, float g,float w)
{
	sides=s;wid=w;len=g;
	cout<<"creating a triangle"<<endl;
}
shape::shape(shape & orig)
{
	sides=orig.sides;
	wid=orig.wid;
	len=orig.len;
	cout<<"creating a copy"<<endl;
}
int main()
{
	shape p;
	cout<<"Area: "<<p.getArea()<<endl;
	shape m(7);
	shape k(4,8);
	shape v(4,6,5);
	shape y(v);
	return 0;
}