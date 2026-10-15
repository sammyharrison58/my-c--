#include <iostream>
using namespace std;
class cat
{
	public:
		string color;
		cat ();
		cat (string k);
		cat(cat & x);
		~cat();//destructure
};
cat::cat()
{
	color=" ";
	cout<<"creating a cat. \n";
}
cat::cat(string k)
{
	color=k;
	cout<<"creating a "<<k<<" cat.\n";
}
cat::cat(cat & x)
{
	color=x.color;
	cout<<"cloning a "<<x.color<<" cat.\n";
}
cat::~cat()
{
	cout<<"killing a "<<color<<" cat"<<endl;
}

int main()
{
	cat c;
	cat d("blue");
	cat b(d);
	return 0;
}