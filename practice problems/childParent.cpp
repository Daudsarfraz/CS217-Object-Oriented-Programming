#include<iostream>
using namespace std;

class Parent{
	public:
	Parent(){
		cout<<"I am a parent.Name Ali"<<endl;
	}
	~Parent(){
		cout<<"I am a parent"<<endl;
	}	
};
class child:public Parent{
	public:
	child(){
		cout<<"I am a child.Name Salman"<<endl;
	}
	~child(){
		cout<<"I am a child"<<endl;
	}	
};
int main(){
	child c;
}
 
