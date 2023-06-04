#include<iostream>
using namespace std;
int main(){
	double rate = 16.00;
	double hours = 45.67;
	double tolerance = 0.02000;
	cout<<"Hours = "<< hours << ", rate = "<< rate 
	<<", pay = " << hours * rate 
	<< ", tolerance = "<< tolerance << endl << endl ;
	cout<<scientific;
	cout<<"Hours = "<< hours << ", rate = "<< rate 
	<<", pay = " << hours * rate 
	<< ", tolerance = "<< tolerance << endl << endl ;
	cout << fixed;
	cout<<"Hours = "<< hours << ", rate = "<< rate 
	<<", pay = " << hours * rate 
	<< ", tolerance = "<< tolerance << endl << endl ;
	return 0;
}