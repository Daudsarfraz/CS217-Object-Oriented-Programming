#include<iostream> // importing library for input and output
using namespace std;
int main(){ // main function
    int value = 7 ; // declaring and assigning value to integer
    int *ptr = &value ;  // assigning value's address to pointer

    cout << ptr << '\n' ; // address of ptr
    cout << ptr + 1 << '\n' ; // increment in address
    cout << ptr + 2 << '\n' ; // increment in address
    cout << ptr + 3 << '\n' ; // increment in address
    return 0;
}