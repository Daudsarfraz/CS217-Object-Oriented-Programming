# include <iostream>
using namespace std;

class StudentRecord{
	private:
		char name[15];
		float s1,s2,s3,total,avg;

public:
	void getRecord(){
		cout << "Enter name of the student: ";cin >> name;
		cout << "Enter marks of 1st subject: ";cin >> s1;
		cout << "Enter marks of 2nd subject: ";cin >> s2;
		cout << "Enter marks of 3rd subject: ";cin >> s3;
		total = s1+s2+s3;
		avg = total/3.0;
		
	}
	
	void displayRecord(){
		cout << " name of the student: " << name <<endl;
		cout << "marks of 1st subject: "<<s1<<endl;
		cout << "marks of 2nd subject: "<<s2 << endl;
		cout << "marks of 3rd subject: "<<s3 <<endl;
		cout << "Total marks : "<<total <<endl;
		cout << "Average marks : "<<avg <<endl;
	}
	};
	
	
	
	int main(){
		StudentRecord stdRecord;
		
		stdRecord.getRecord();
		stdRecord.displayRecord();
		return 0;
	}