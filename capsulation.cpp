#include <iostream>
using namespace std;
class animal
{
public:
	int legs;
	string color;
	void eat ();
	void move();
};
void animal::eat()
{
	cout<<"Animal eating"<<endl;
}
void animal::move()
{
	cout<<"Animal moving"<<endl;
}
int main()
{
	animal a;
	a.move();
	return 0;
}