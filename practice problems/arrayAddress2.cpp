#include <iostream> // importing library
using namespace std;
int main(){ // main function
	int array[5] = {22, 134, 136, 138, 1450}; // declaring array
	int *aptr; // declaring pointer
	aptr = array; // assigning array to aptr variable
	
	cout << "Address of Array:\t " << &array[0] << endl; // address of array first element
	cout << "Address of aptr:\t " << aptr << endl; // address of first element
	cout << "\nValue of Array:\t\t " << array[0] << endl; // display value at 0 index
	cout << "Value of aptr:\t\t " << *aptr << endl; // display value at 0 index
	return 0;
}