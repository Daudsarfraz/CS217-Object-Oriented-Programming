#include<iostream>
using namespace std;
int simple(int x){
	if(x==10)
	return 300;
	else if (x == 100)
	return 500;
	else 
	return 100000;
}
int main(){
	int y;
	cout <<"Plz Enter any integer: ";
	cin >> y;
	cout <<"The returned value is: " <<simple(y);
	return 0;
}