#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
	double u,v;
	string str;
	cout << "Line 1: 2 to the power of 6: "
	<< static_cast<int>(pow(2.5,6)) << endl;
	u = 12.5;
	v = 3.0;
	cout << "Line 4: " << u << " to the power of " 
	<< v <<" = "<<pow(u,v)<<endl;
	cout << "Line 5: Square root of 24:  " << sqrt(24.5) <<endl;
	u = pow(8.0,9.6);
	cout<<"Line 7: u = "<< u << endl;
	str = "Programming with c++";
	cout<<"Line 9: Length of str = "
	<<str.length()<<endl;	 
	return 0;
}