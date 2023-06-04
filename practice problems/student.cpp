#include<iostream>
using namespace std;
struct Students{
	char name[20];
	int age;
	string rollno;
};
int main(){
	Students s1,s2,s3,s4,s5;
	cout<<"\n\n\tEnter student 1 Name: ";
	cin.getline(s1.name, 20);
	cout<<"\tEnter student 1 Age: ";
	cin>> s1.age;
	cout<<"\tEnter student 1 Roll no: ";
	cin>>s1.rollno;	
	cin.ignore();	
	cout<<"\n\tEnter student 2 Name: ";
	cin.getline(s2.name, 20);	
	cout<<"\tEnter student 2 Age: ";
	cin>> s2.age;
	cout<<"\tEnter student 2 Roll no: ";
	cin>>s2.rollno;
	cout<<"\n\n\n\t1st student Name: "<<s1.name<<endl;
	cout<<"\t1st student Age: "<<s1.age<<endl;
	cout<<"\t1st student Roll no: "<<s1.rollno<<endl;
	cout<<"\n\t2nd student Name: "<<s2.name<<endl;
	cout<<"\t2nd student Age: "<<s2.age<<endl;
	cout<<"\t2nd student Roll no: "<<s2.rollno;	
	return 0;
}