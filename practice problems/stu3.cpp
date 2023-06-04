#include <iostream>
using namespace std;
class Student // Class
{	// data specifer
	public:
	//data members
	int id;
	string name;
	double fee;
};
int main () {
	// object of class
	Student s1;
	// accessing members
	s1.id = 200153;
	s1.name = "Dawood Sarfraz";
	s1.fee = 150000;
	cout << "Student ID : " << s1.id << endl;
	cout << "Student NAME : " << s1.name <<endl;
	cout << "Student FEE : " << 	s1.fee << endl;
}