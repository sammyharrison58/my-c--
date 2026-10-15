#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	int choice;
	cout<<"This is Our Calculator"<<endl;
	cout<<"Enter num1:";
	cin>>num1;
	cout<<"Enter num2:";
	cin>>num2;
	cout<<"Enter your Operator"<<endl;
	cout<<"1).  +"<<endl;
	cout<<"2).  -"<<endl;
	cout<<"3).  /"<<endl;
	cout<<"4).  *"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	
	switch(choice)
	{
	case 1:	case 1:
		cout<<"The sum is:"<<num1+num2<<endl;
		break;
		cout<<"The sum is:"<<num1+num2<<endl;
		break;
	case 2:	case 1:
		cout<<"The sum is:"<<num1+num2<<endl;
		break;
		cout<<"The differnce is:"<<num1-num2<<endl;
		break;
	case 3:
		if (num2!=0)
		cout<<"The division is:"<<num1/num2<<endl;
		else
		{	case 1:
		cout<<"The sum is:"<<num1+num2<<endl;
		break;
			cout<<"Invalid!!";
		}
		break;
	case 4:
		cout<<"The Product is:"<<num1*num2<<endl;
		break;
	default:
		cout<<"Invalid!!!";
		break;
	}
	

	
	
	return 0;
}