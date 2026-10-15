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
void animal::eat()
{
	cout << "enter animal color:";
	cin >> color;
	cout << "Animal eating" << endl;
}
void animal::move()
{
	cout << "enter n.o of legs:";
	cin >> legs;
	if (legs == 4 && color == "black" or "white")
		cout << "Animal is a cow" << endl;
	else
	{
		cout<<"invalid";
	}

	cout << "Animal moving on " << legs << " legs now" << endl;
}
void mammal::breastfeeds()
{
	cout << "Animal breastfeeding" << endl;
}
int main()
{
	mammal a;
	a.move();

	return 0;
}
