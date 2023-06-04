#include <iostream>
using namespace std;
int max(int num1, int num2);
int Min(int num1, int num2);
int Multiply(int num1, int num2);
int sum(int num1, int num2);
int main(){
	int num1, num2;
	cout <<"Enter num1 = ";
		cin >> num1;
	cout <<"Enter num2 = ";
		cin >> num2;
	cout<<"The SUM is = "<< sum(num1, num2)<<endl;	
	cout<<"The MAX is = "<< max(num1, num2)<<endl;
	cout<<"The MINUS is = "<< Min(num1, num2)<<endl;
	cout<<"The MULTIPLY is = "<< Multiply(num1, num2)<<endl;}
int max(int num1, int num2){
	int result = 0;
	if (num1>num2)
	result = num1;
	else 
	result = num2;
	return result;}
int sum(int num1, int num2){
	return (num1 + num2);}
int Min(int num1, int num2){
	return (num1 - num2);}
int Multiply(int num1, int num2){
	return (num1 * num2);}
