#include<iostream> // importing library for input and output

using namespace std;
int main(){ // main function
    int a = 10, *b, *c ; // declaration of pointers and variables
    b = &a; // assigning a's value to b
    c = b; // assign value of b to c
    cout << *b << "\t" << *c ; //value of b's & c's address
    return 0;
}