#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int const correct_pin=1234;
	int pin;
	double amount;
	double balance=1000.0;
	int choice;
	
	
	cout<<"Welcome To Apex Bank ATM"<<endl;
	cout<<"Enter Your pin:";
	cin>>pin;
	if (pin!=correct_pin){
		cout<<"Invalid pin";
		return 0;
		
	}
	else
	{
		cout<<"Welcome"<<endl;
		cout<<"1). Check Blance"<<endl;
		cout<<"2). Withdraw"<<endl;
		cout<<"3). Deposit"<<endl;
		cout<<"4). Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		
	}
	switch(choice)
	{
	case 1:
		cout<<"Your balance is:ksh "<<balance<<endl;
		break;
	case 2:
	
			cout<<"enter amount to withdraw:";
			cin>>amount;
		if(amount<=balance){
			cout<<"You withdrew:ksh "<<amount<<endl;
			cout<<"Your balance:ksh "<<balance-amount<<endl;
		}
		else
		{
			cout<<"Insufficient Funds"<<endl;
		}
		
		break;
	case 3:
			cout<<"enter amount to deposit:";
			cin>>amount;
		if(amount!=0){
			cout<<"You Deposited:ksh "<<amount<<endl;
			cout<<"Your balance:"<<amount+balance<<endl;
		}
		else
		{
			cout<<"Invalid amount"<<endl;
		}
		break;
	case 4:
		cout<<"Thank You for Visiting us!! "<<endl;
		break;
	
	default:
		cout<<"Invalid choice";
		break;
	}
	
	return 0;
}