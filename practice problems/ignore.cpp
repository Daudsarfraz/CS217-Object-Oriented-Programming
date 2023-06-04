#include <iostream>
using namespace std;
int main(){
	int a = 677 ;
	int b = 789;

	
	cout <<"Line 3: Enter a number followed " << " by a character: ";
	cin>> a >> b ;
	cout << endl << "Line 5: a = "<< a << " , b = "<< b << endl;
	cin.clear();
	cin.ignore(200,'\n');
	cout << "\n\nLine 8: The Enter two Numbers : ";
	cin >> a >> b;
	cout << endl << "Line 10: a = " << a << " ,  b = "<< b <<endl;
	return 0;
}