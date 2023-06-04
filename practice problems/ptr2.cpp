#include<iostream> // importing library for input and output
using namespace std;
int main(){ // main function
    int *ptr ; // declaring pointer
    int x = 10 ; // assigning value to variable
    ptr = &x ; // address of x to variable ptr
    cout << "The value of x:\t" << x << endl; // value of x display
	cout << "The value &num:\t" << &ptr << endl; // address of address of x
    cout << "The value of ptr:\t" << ptr << endl; // address of x
	cout << "The value of &x:\t" << &x << endl; // address of x
    return 0;
}