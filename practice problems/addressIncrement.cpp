#include<iostream>  // importing library for input and output
using namespace std;
int main(){ // main function
    int b[5] ; // declaring array
    int* a = b ; // assigning array address to 
    cout << a << endl ; // address in point a 
    a++ ; // increment in address
    cout << a << endl ; // address after decrement 
    a-- ; // decrement in address
    cout << a << endl ; // address of increment 
    a = a + 2 ; // increment in address
    cout << a << endl ; // address of increment
    return 0 ;
}