#include <iostream> // importing Librar for input and output
using namespace std;
int main(){ // main function
	int x = 10, y = 20, z = 30;
	// Declaring array of three pointer
	int *array[3];
	// Assigning reference of x to array 0th position
	array[0] = &x;
	// Assigning reference of y to array 1st position
	array[1] = &y;
	// Assigning reference of z to array 2nd position
	array[2] = &z;
	cout <<"\nValues: "; // msg display
	for(int a = 0; a<3; a++){ // for loop
		cout << *array[a] << ", " ; // display value of every index 
	return 0;
	}
}