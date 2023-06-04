#include<iostream>
using namespace std;
int main(){
	float payRate;
	int hoursWorked;
	cout<<"Plz Enter Pay Rate: ";
	cin>>payRate;
	cout<<"Plz Enter Hours Worked: ";
	cin>>hoursWorked;
	cout<<"Entered Pay Rate: "<<payRate<<endl;
	cout<<"Entered Hours Worked: "<<hoursWorked<<endl;
	
	cout<<"--------------------------"<<endl;
	cout<<"Plz Enter Pay Rate & Hours Worked: ";
	cin>>payRate>>hoursWorked;
	cout<<"Entered Pay Rate: "<<payRate<<endl;
	cout<<"Entered Hours Worked: "<<hoursWorked<<endl;
	return 0;
}