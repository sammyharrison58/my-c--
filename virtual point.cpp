#include <iostream>
using namespace std;
class person
{
	public:
		void speak();
		void think();
		
};
class student:public person
{
	public:
		void study();
		void speak();
};
void student::study()
{
	cout<<"Person studying..\n";
}
void student::speak()
{
	cout<<"comrade speaking..\n";
}
void person::speak()
{
	cout<<"Person speaking..\n";
}
void person::think()
{
	cout<<"Person thinking..\n";
}
int main()
{
	person*p;
	student k;
	p=&k;
	p->think();
	p->speak();
	
	
	return 0;
}