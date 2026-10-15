#include <iostream>
using namespace std;
class uni
{
public:
	int year;
	void units();
	void time();
};
void uni::units()
{
	cout<<"enter your year of study:";
	cin>>year;
	if (year==1){
		cout<<"register for 6 units??"<<endl;
	}
	else if(year==2)
	{
			cout<<"register for 4 units??"<<endl;
	}
		else if(year==3)
	{
			cout<<"register for 7 units??"<<endl;
	}
		else if(year==4)
	{
			cout<<"register for 5 units??"<<endl;
	}
	else
	{
		cout<<"Invalid"<<endl;
	}
			
}
void uni::time()
{
		if (year==1){
		cout<<"10am"<<endl;
	}
	else if(year==2)
	{
			cout<<"1pm"<<endl;
	}
		else if(year==3)
	{
			cout<<"3pm"<<endl;
	}
		else if(year==4)
	{
			cout<<"7am"<<endl;
	}
	else
	{
		cout<<"Invalid"<<endl;
	}
}
int main()
{
	uni a;
	a.units();
	a.time();
	return 0;
}