#include<iostream> // importing library
using namespace std; 
void fun(int*, int*); // declaing a user defined function
int main(){ // main function
    int A = 10, B = 20; // declaring variables
    cout << "\nValues before calling: " ; // display msg
    cout << "\nA: " << A ; // display A's Value
    cout << "\nB: " << B ; // dispaly B's Value
    fun(&A, &B); // calling function
    cout << "\nValues after calling: "  ;  // display msg
    cout << "\nA: " << A ; // calling A's value after reference
    cout << "\nB: " << B ; // calling B's value after reference
    return 0 ;
}
void fun(int *x, int *y){ // passing pointers as argument
	*x = 11 ; // assigning value to pointer
	*y = 22 ; // assigning value to pointer
}