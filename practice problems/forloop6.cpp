//Q#15.Calculate the sum of numbers from 1 to 100 using for loop.
#include <iostream>
using namespace std;
int main(){
	int num ;
	int sum = 0 ;
	for ( num = 1; num <= 100; num++ ){
		sum = sum + num ;
}
	cout << "The sum of first " << num - 1 << " number is: " << sum << endl ;
return 0;
}