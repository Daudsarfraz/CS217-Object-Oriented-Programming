#include<iostream> // import library for input and output
using namespace std;
int main(){ // main function
	void *ptr1, *ptr2, *ptr3, *ptr4;
    int i ; // declaring int variable
	float f ; // declaring float variable
	double d ; // declaring double variable
	char c ; // declaring character variable
    cout << "Enter the integer value: " ; // display msg for integer value
    cin >> i ; // input integer
	cout << "Enter the character: " ; // display msg for character value
	cin >> c ; // input character
    cout << "Enter the float value: " ; // display msg for float value
    cin >> f ; // input float
	cout << "Enter the double value: " ; // display msg for double value
	cin >> d ; // input double
	ptr1 = &i ; // assign integer's address to ptr1
	ptr2 = &c ; // assign character's address to ptr2
	ptr3 = &f ; // assign float's address to ptr3
	ptr4 = &d ; // assign double's address to ptr4
	cout << "Your entered integer value address is: " << ptr1 <<endl; // display integer's address in  ptr1
	cout << "Your entered character address is: " << ptr2 <<endl; // display character's address in ptr2
	cout << "Your entered float value address is: " << ptr3 <<endl; // display float's address in ptr3
	cout << "Your entered double value address is: " << ptr4 <<endl; // display double's address in ptr4
    return 0;
}