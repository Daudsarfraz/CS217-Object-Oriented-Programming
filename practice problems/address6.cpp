#include <iostream> // importing library for input and output
using namespace std;
int main(){ // main function
	int a = 10 ; // declaration of integer variable
	cout << "The address of \"a\" variable is " << &a << endl; // address of a
	// pointer to int
	int* p; // integer pointer 
	p = &a ;// now p is equal to address of "a" variable
	cout << "The value of \"p\" variable is " << p << endl; // display address of 
	// pointer to pointer
	int** doublePtr = &p;
	cout << "The value of \"doublePtr\" variable is " << doublePtr << endl; // address of pointer's address
	return 0;
}