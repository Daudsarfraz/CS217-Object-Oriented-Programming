#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int x = 78;
	int a = 346;
	double y = 47.298;
	cout << fixed << showpoint;
	cout <<"12345678901234567890" <<endl;
	cout << setw(5) << x << endl;
	cout << setw(5) << a << setw(5) << "Hi"
		 << setw(5) << x << endl << endl;
		 
	cout << setprecision(2);
	cout << setw(6) << a << setw(6) << y
		 << setw(6) << x << endl;
	cout << setw(6) << x << setw(6) << a 
		 << setw(6) << y << endl << endl;
		 
	cout << setw(5) << a << endl;
	cout << setw(2) << a << setw(4) << x << endl;
		 return 0;
		 
}

