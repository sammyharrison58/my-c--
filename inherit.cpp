#include <iostream>
using namespace std;
class animal
{
public:
	int legs;
	string color;
	void eat();
	void move();

};
class mammal: public animal
{
public:
	int teats;
	void breastfeeds();
};
class bird: public animal
{
public:
	int wings;
	void layeggs();
};
class bat: public animal, public bird
{
public:
	void nightrun();
};
void bat::nightrun()
{

	cout << "Night Running...\n";
}

void bird::layeggs()
{

	cout << "Laying Eggs...\n";	
}

void animal::eat()
{

	cout << "Animal eating...\n";
}
void animal::move()
{


	cout << "Animal moving on ...\n";
}
void mammal::breastfeeds()
{
	cout << "Animal breastfeeding...\n";
}
int main()
{
	mammal a;
	bird b;
	bat t;
	a.move();

	return 0;
}
