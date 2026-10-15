#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	fstream myfile("C:/Users/HomePC/Desktop/test.txt");
	//myfile<<"Hello world\n";
	string str;
	myfile>>str;
	cout<<"File content:/n"<<str<<endl;
	myfile.close();
	
	
	
	return 0;
}