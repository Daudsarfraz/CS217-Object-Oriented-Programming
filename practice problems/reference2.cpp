#include <iostream> // importing library
using namespace std;
int *reference(int); // declaring int reference
int main(){ // main function
	int A = 10 ; // declaring and assigning value to variable
	int *ptr; // declaring pointer
		cout << "\nAddress of " << A << " in main() is: " << &A ; // address from main function
	ptr = reference(A); // calling function
		cout << "\nAddress of " << A << " in reference() is " << ptr; // address calling from reference function
	return 0;
}
int *reference(int n){ // user defined function
	return &n;
}