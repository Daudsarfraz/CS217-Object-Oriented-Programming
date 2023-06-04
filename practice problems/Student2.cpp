#include<iostream>
#include<stdlib.h>
using namespace std;
struct Students{
	char name[20];
	int age;
	string rollno;
};
int main(){
	system("cls");
	Students student[3];
	for(int x=0;x<3;x++){
	cout<<"Enter student "<<x+1<< " Name: ";
	cin.getline(student[x].name, 20);	
	cout<<"Enter student "<<x+1<<" Age: ";
	cin>> student[x].age;
	cout<<"Enter student "<<x+1<<" Roll no: ";
	cin>>student[x].rollno;
	 
	cout<<endl;
	cin.ignore();}
	
	for (int x=0; x<3;x++){
	cout<<"Student "<<x+1<< " Name: "<<student[x].name<<endl;
	cout<<"student "<<x+1<<" Age: "<<student[x].age<<endl;
	cout<<"Enter student "<<x+1<<" Roll no: "<<student[x].rollno<<endl;
	}
	return 0;
}