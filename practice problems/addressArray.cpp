#include <iostream> // importing library for input and output
using namespace std;
int main(){ // main function
	int array[10] = {78, 45, 12, 89, 56, 23, 79, 46, 13, 82} ; // declaing integer Array
	int *ptr ; // pointer variable
	// Assigning reference of array in pointer variable
		ptr = array;
	cout << "\nValues: "; // display msg
	for(int a = 1; a <= 10; a++){ 
	
		cout << *ptr << " "; //Displaying values of array
		// using pointer incrementing pointer variable
		ptr++; 
	}
	return 0;
	}
