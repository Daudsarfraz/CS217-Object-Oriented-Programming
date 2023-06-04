#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float num = 354.23133343457;
	cout<<"The Value is: "<<num<<endl;
	cout<<fixed<<setprecision(5)<<num;
	return 0;
}