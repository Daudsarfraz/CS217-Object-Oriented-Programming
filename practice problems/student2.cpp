#include <iostream>
using namespace std;
class Student // Class
{	// data specifer
	private: /* private key word is an access specifer.private
	mean below data memeber can not access outside class*/
	int rollNo;
	string name;
	bool status;
	float result;
	/* public key word is an access specifer.public
	mean below data memeber can access outside & outside class*/
	public:
	// A member function of class student	
	void getData(int rNo, string Name,bool Status, float Result){
	 rollNo = rNo;
	 name = Name;
	 status = Status;
	 result = Result;
		}

 void printData(){
 	// A member function of class student
	cout << "rollno : " << rollNo << endl;
	cout << "NAME : " << name <<endl;
	cout << "status: " << status << endl;
	cout << "result: " << result << endl;
	}
};
	int main(){
		Student s1;
		s1.getData(20,"Dawood Sarfraz", true, 90);
		s1.printData();
		 return 0;
	}