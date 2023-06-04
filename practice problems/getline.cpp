#include<iostream>
using namespace std;
struct Students
{
	char name[20];
	int age;
	string rollno;
};
int main(){
	Students s1;
	cout<<"Enter student Name: ";
	cin.getline(s1.name, 20);
	
	cout<<"Enter student Age: ";
	cin>> s1.age;
	
	cout<<"Enter student Roll no: ";
	cin>>s1.rollno;
	 
	cout<<"Name: "<<s1.name<<endl;
	cout<<"Age: "<<s1.age<<endl;
	cout<<"Roll no: "<<s1.rollno<<endl;	
	return 0;
}