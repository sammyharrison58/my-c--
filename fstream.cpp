#include <fstream>
using namespace std;
int main()
{
	fstream myfile("C:/Users/HomePC/Desktop/test.txt");
	myfile<<"Hello world\n";
	myfile.close();
	
	
	return 0;
}