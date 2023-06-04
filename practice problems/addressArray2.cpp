#include <iostream> // importing library
using namespace std;
int main(){ // main function
	char* a = "Dawood"; // declare a character pointer
	
	cout << a << endl; // display total character of a
	cout << &a << endl; // address of a
	cout << *a << endl; // first value
	cout << a[0] << endl; // value at 0 index 
	cout << a++ << endl; // total characters 
	cout << *a++ << endl; // increment in pointer display 2nd element
	return 0;
}