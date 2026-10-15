#include <iostream>
using namespace std;
class animal
{
public:
	int legs, wings;
	animal(int, int);
	animal operator + (animal x);

};
animal::animal(int l, int w)
{
	legs = l;
	wings = w;
}
animal animal::operator + (animal x)
{
	animal temp(0,0);
	temp.legs = legs + x.legs;
	temp.wings = wings + x.wings;
	return temp;
}
int main()
{
	animal a(4, 2);
	animal b(2, 2);
	animal c = a + b;
	cout << "animal a " << a.legs << endl;
	cout << "animal b " << b.legs << endl;
	cout << "animal c " << c.legs << endl;

	return 0;
}
