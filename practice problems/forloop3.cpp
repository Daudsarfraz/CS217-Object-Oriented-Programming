//Q#17.Calculate the sum of odd numbers from 1 to 100 using for loop.
#include <iostream>
using namespace std;
int main(){
int sum = 0, num = 100 ;
	for ( int num = 0; num < 100; num++ ){
		if ( num%2 != 0 ){
			sum = sum + num ;
}
}
cout << "The sum of first " << num << " odd numbers is: " << sum << endl ;
return 0;
}