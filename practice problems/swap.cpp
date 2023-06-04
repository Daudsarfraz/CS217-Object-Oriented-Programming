#include<iostream> // importing library
using namespace std;
void fun(int, int); // declaring function
int main(){ // main function
    int A = 89, B = 120; // declaration and assigning values to variables
    cout << "\nValues before calling: " ;  // display msg  
    cout << "\nA: " << A ; // display A's value
    cout << "\nB: " << B ; // display B's value
    fun(A, B); // calling function
    cout << "\nValues after calling: " ;    
    cout << "\nA: " << A ; // after calling value of A
    cout << "\nB: " << B ; // after calling value of A
    return 0 ;
}
void fun(int x, int y){ // user define function
	x = 11 ; // variable X's value
	y = 22 ; // variable Y's value
}