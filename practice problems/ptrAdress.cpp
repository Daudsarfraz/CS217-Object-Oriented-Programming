#include <iostream> // importing library for input and output
using namespace std;
int main(){ // main function
	int y[5] ; // declaring int array of five elements
	int *yptr; // declaring pointer
	yptr = y; // assigning array to variable
	
	cout << "Pointer Address is: " << yptr << endl; // before increment address
	yptr++; // increment pointer
	cout << "Pointer Address is: " << yptr ; // after increment address
	return 0;
}