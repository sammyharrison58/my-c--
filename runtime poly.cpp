#include <iostream>//overiding
using namespace std;
class animal
{
	public:
	void move();
};
class bird:public animal
{
	public:
		void move();
};
void bird::move()
{
	cout<<"Bird Flying"<<endl;
}
void animal::move()
{
	cout<<"animal moving"<<endl;
}
int main()
{
	bird a;
	a.move();
	
	return 0;
}