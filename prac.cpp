#include <iostream>
using namespace std;
class animal
{
	public:
	int legs;
	void move ();
	void sleep();
	
};
void animal::move()
{
	cout<<"enter the number of legs:";
	cin>>legs;
	cout<<"The animal is moving on "<<legs<<" legs"<<endl;
}
void animal::sleep()
{
	cout<<"the animal is sleeping"<<endl;
}
int main()
{
	animal a;
	a.move();
	return 0;
}