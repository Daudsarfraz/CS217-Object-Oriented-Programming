#include <iostream> // importing library
using namespace std;
int Sum(int, int); // declaring function 
int (*ptr)(int, int); 
int main(){ // main function
	int a, b, rs; // declaring variables
	cout << "\nEnter 1st Number: "; // display msg
	cin >> a ; // user input
	cout << "\nEnter 2nd Number: "; // display msg
	cin >> b ; // user input
	ptr = Sum; // assigning sum's value to variable
	rs = (*ptr)(a,b); // sum and value sort in pointer's address
	cout << "\nThe sum is: "<< rs;  // display rs
	return 0;
}
int Sum(int x, int y){ // user define function
	return x + y ;
}