#include<iostream> // importing labirary for input and output
using namespace std;
int main(){ // main function
    int num = 100; // Declaring variable and assign value
    int *ptr ; // Declaring pointer
    ptr = &num; // assign number's address to variable ptr
    cout <<"num = " << num << endl; // Display number
	cout << "&num = " << &num << endl; // Address of number
    cout << "ptr = " << ptr << endl; // will display address store in ptr
	cout << "*ptr = " << *ptr << endl; // value of number
    return 0;
}