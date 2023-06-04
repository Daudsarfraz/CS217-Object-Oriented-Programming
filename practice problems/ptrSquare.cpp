#include <iostream> // importing library
using namespace std;
void GetNumber(int *num); // declaring function
void Square(int *num); // declaring function
int main(){ // main function
	int number; // declaing variable
	// calling GetNUmber Function
	GetNumber(&number);
	// calling Square function
	Square(&number);
	return 0 ;
}
void GetNumber(int *num){ // user defined function
	cout << "Enter Number: " ; 
	cin >> *num; // storing input in pointer
}
void Square (int *num){ // user defined function
	int result = (*num) * (*num); // multiplication of numbers
	cout << "Square is:\t" << result << endl; // dispaly result
}