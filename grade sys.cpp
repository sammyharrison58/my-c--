#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char name;
	int points;
	char grade;
	char gradeb;
	cout<<"WELCOME TO KUCCPS!!"<<endl;

	cout<<"Enter Your Grade:";
	cin>>grade;
	switch(grade)
	{
	case 'A':
		cout<<"a). UON Nairobi"<<endl;
		cout<<"b). Co-operative Univesity Nairobi"<<endl;
		cout<<"c). MUST Meru"<<endl;
		cout<<"Enter cluster points:";
		cin>>points;
		if(points==84){
			cout<<"UON Nairobi"<<endl;
		}
		else if (points==82)
		{
			cout<<" Co-operative Univesity Nairobi"<<endl;
		}
		else
		{
			cout<<" MUST Meru"<<endl;
		}
		break;
	case 'A-':
		cout<<"a). kenyatta Nairobi"<<endl;
		cout<<"b). Jarmogi odinga Oginga Univesity Nairobi"<<endl;
		cout<<"c). Dedan Kimathi Nairobi"<<endl;
			cout<<"Enter cluster points:";
		cin>>points;
		if(points==81){
			cout<<"kenyatta Nairobi"<<endl;
		}
		else if (points==80)
		{
			cout<<" Jarmogi odinga Oginga Univesity Nairob"<<endl;
		}
		else
		{
			cout<<"Dedan Kimathi Nairobi"<<endl;
		}
		
		break;
	case 'B+':
		cout<<"a). MUST Nairobi"<<endl;
		cout<<"b).  Ergaton Univesity Nairobi"<<endl;
		cout<<"c). JKUAT Nairobi"<<endl;
			cout<<"Enter cluster points:";
		cin>>points;
			if(points==78){
			cout<<"JKUAT Nairobi"<<endl;
		}
		else if (points==76)
		{
			cout<<" MUST Nairobi"<<endl;
		}
		else
		{
			cout<<"Ergaton Univesity Nairobi"<<endl;
		}
		
	
		break;
	case 'B':
		cout<<"a). Maseno Nairobi"<<endl;
		cout<<"b). Great Lakes Univesity Nairobi"<<endl;
		cout<<"c). Kisii Nairobi"<<endl;
			cout<<"Enter cluster points:";
		cin>>points;
			if(points==78){
			cout<<"Maseno Nairobi"<<endl;
		}
		else if (points==76)
		{
			cout<<" Kisii Nairobi"<<endl;
		}
		else
		{
			cout<<"reat Lakes Univesity Nairobi"<<endl;
		}
		
		break;
	case 'B-':
		cout<<"a). Karatina Nyeri"<<endl;
		cout<<"b). Pwani Univesity Mobasa"<<endl;
		cout<<"c). TUK Nairobi"<<endl;
			cout<<"Enter cluster points:";
		cin>>points;
			if(points==78){
			cout<<"TUK Nairobi"<<endl;
		}
		else if (points==76)
		{
			cout<<"Karatina Nyeri "<<endl;
		}
		else
		{
			cout<<"Pwani Univesity Mobasa"<<endl;
		}
		
	
		break;
	case 'C+':
		cout<<"a). TUM Mombasa"<<endl;
		cout<<"b). Muranga Univesity Murang'a"<<endl;
		cout<<"c). Kirinyaga kirinyaga"<<endl;
			cout<<"Enter cluster points:";
		cin>>points;
			if(points==78){
			cout<<"TUM Mombasa"<<endl;
		}
		else if (points==76)
		{
			cout<<"Muranga Univesity Murang'a "<<endl;
		}
		else
		{
			cout<<"Kirinyaga kirinyaga"<<endl;
		}
		
	
		break;
	case 'C':
		cout<<"Welcome to College choices"<<endl;
		cout<<"a). Kisumu poly"<<endl;
		cout<<"b).NIBS poly"<<endl;
		cout<<"c). Meru poly"<<endl;
			cout<<"Enter cluster points:";
		cin>>points;
			if(points==78){
			cout<<"Kisumu poly"<<endl;
		}
		else if (points==76)
		{
			cout<<"NIBS poly "<<endl;
		}
		else
		{
			cout<<" Meru poly"<<endl;
		}
	
		break;
	case 'C-':
		cout<<"Welcome to College choices"<<endl;
		cout<<"a). Nairobi poly"<<endl;
		cout<<"b).pwani poly"<<endl;
		cout<<"c). KMTC "<<endl;	
		cout<<"Enter cluster points:";
		cin>>points;
		
			if(points==78){
			cout<<"Nairobi poly"<<endl;
		}
		else if (points==76)
		{
			cout<<"pwani poly "<<endl;
		}
		else
		{
			cout<<" KMTC"<<endl;
		}
	
	
		break;
	case 'D+':
		cout<<"Welcome to College choices"<<endl;
		cout<<"a).Nakuru poly"<<endl;
		cout<<"b). KMTC poly"<<endl;
		cout<<"c). Meru poly"<<endl;
			cout<<"Enter cluster points:";
		cin>>points;
			if(points==78){
			cout<<"Nakuru poly"<<endl;
		}
		else if (points==76)
		{
			cout<<"KMTC poly "<<endl;
		}
		else
		{
			cout<<" Meru poly"<<endl;
		}
	
		break;
	case 'D':
		cout<<"Welcome to College choices"<<endl;
		cout<<"a). Nyeri poly"<<endl;
		cout<<"b). KMTC poly"<<endl;
		cout<<"c). siaya poly"<<endl;
			if(points==78){
			cout<<"Nyeri poly"<<endl;
		}
		else if (points==76)
		{
			cout<<"KMTC poly "<<endl;
		}
		else
		{
			cout<<" Siaya poly"<<endl;
		}
	
		break;
	case 'D-':
		cout<<"Welcome to College choices"<<endl;
		cout<<"a).Baringo poly"<<endl;
		cout<<"b). KMTC poly"<<endl;
		cout<<"c). Migori poly"<<endl;
			cout<<"Enter cluster points:";
		cin>>points;
			if(points==78){
			cout<<"Baringo poly"<<endl;
		}
		else if (points==76)
		{
			cout<<"KMTC poly "<<endl;
		}
		else
		{
			cout<<" Migori poly"<<endl;
		}
	
		break;
	case 'E':
		cout<<"Welcome to College choices"<<endl;
		cout<<"a).Africa colledge"<<endl;
		cout<<"b). KMTC poly"<<endl;
		cout<<"c). Marsabit poly"<<endl;
			cout<<"Enter cluster points:";
		cin>>points;
			if(points==78){
			cout<<"Africa college"<<endl;
		}
		else if (points==76)
		{
			cout<<"KMTC poly "<<endl;
		}
		else
		{
			cout<<" Marsabit poly"<<endl;
		}
		break;
	default:
		cout<<"Invalid grade";
		break;
	}
	
	return 0;
}