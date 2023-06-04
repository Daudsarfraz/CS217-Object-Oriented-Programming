#include <iostream>
using namespace std;
int main() {
    int number,remainder;   
    cout << "Plz Enter an integer = ";  
     cin >> number;    
    if (number != 0) {
    	remainder = number % 2;        
		if (remainder == 0) {
            cout <<number<< " number is an EVEN number." << endl;
        }
        else {
            cout<<number<< " number is an ODD number." << endl;
        }  
    }
    else {
        cout<< number << " number is neither an EVEN nor ODD." << endl;
    }
	return 0;
}