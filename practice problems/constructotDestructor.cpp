#include<iostream>
using namespace std;

class Father{
	public:
	Father(){
		cout<<"I am a father constructor. "<<endl;
	}
	~Father(){
		cout<<"I am a father destructor"<<endl;
	}	
};
class Mother{
	public:
	Mother(){
		cout<<"I am a mother constructor "<<endl;
	}
	~Mother(){
		cout<<"I am a mother destructor"<<endl;
	}	
};
class Child:public Father,public Mother{
	public:
	Child(){
		cout<<"I am a child constructor. "<<endl;
	}
	~Child(){
		cout<<"I am a child destructor"<<endl;
	}	
};
int main(){
	Father f;
	Mother m;
	Child c;
}