#include <iostream>
#include <string.h>
using namespace std;

int main()
{

	const int correct_pin=1234;
	int pin;
	double balance = 1000.0;
	double amount;
	int choice;
	cout <<"welcome to Apex Bank\n"<<endl;
	cout <<"please enter your pin: ";
	cin >>pin;
	
	if (pin != correct_pin){
		cout <<"incorrect PIN!!Access Denied!"<<endl;
		return 0;	
	}
	do{
		cout << "\nATM MENU: "<<endl;
		cout << "1. Check Balance "<<endl;
		cout << "2. Deposit Money "<<endl;
		cout << "3. Withdraw Money "<<endl;
		cout << "4. Exit "<<endl;
		cout<<"Enter your choice: ";
		cin >> choice;
		switch (choice){
			case 1:
				cout<<"Your Current Blance is: $"<<balance<<endl;
				break;
			case 2:
				cout<<"Enter Amount to Deposit: $";
				cin >> amount;
				if(amount > 0){
					balance += amount;
					cout<<"Deposit: $"<<amount<<endl;
					
				}
				else
				{
					cout<<"Invaid amount"<<endl;
				}
				break;
			case 3:
				cout<<"Enter Amount to withdraw: $";
				cin>>amount ;
				if(amount > 0 && amount <= balance){
					balance -= amount;
					cout<<"Withdrew: $"<<amount<<endl;
					
				}
				else
				{
					cout<<"Insufficient funds"<<endl;
				}
				break;
			case 4:
				cout<<"Thank You For using the ATM.Googbye!"<<endl;
				break;
			default:
				cout<< "Invalid choice. PLease  Try again!"<<endl;
								
		}
	}while(choice !=4);
	
	return 0;
}