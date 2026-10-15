#include <iostream>//compile time
using namespace std;
class animal
{
	public:
		int legs, wings;s
		void move();
		void move(int l);
		void move(int l,int w);
};
void animal::move()
{
	cout<<"Animal moving"<<endl;
}
void animal::move(int l)
{
	cout<<"Animal walking"<<endl;
}
void animal::move(int l,int w)
{
	cout<<"Animal flying"<<endl;
}
int main()
{
	animal x;
	x.move();
	x.move(1);
	x.move(2,3);
	
	return 0;
}
