#include <iostream>
using namespace std;

class student
{
public:
	static int studcount;
	void study();
	student();

};
int student::studcount = 0;
student::student()
{
	studcount++;
};
void student::study()
{
	cout << "Person studying..\n";
}

int main()
{
	student t;
	cout << "Student Number: " << t.studcount << endl;
	student a;
	cout << "Student Number: " << a.studcount << endl;

	return 0;
}
