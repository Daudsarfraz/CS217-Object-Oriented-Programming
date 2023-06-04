
#include <iostream> // importing library
using namespace std;
int main(){ // main function
	float a[5] ; // declare float array
	float *ptr ; // declare float pointer
	cout <<"Displaying address using arrays: " << endl; // msg to display user
	for(int i = 0 ; i < 5;++i){ // for loop 
	
		cout << "&a[" << i << "] = " << &a[i] << endl; // will display address of specific position
	}

	ptr = a ;
		cout << "\nDisplaying address using pointers: " << endl; // msg to display user
	for(int i = 0 ; i < 5 ; ++i){ // for loop 
		cout << "ptr + " << i << " = " << ptr+i << endl; // display address by help of pointer
	}
	return 0;
	}
