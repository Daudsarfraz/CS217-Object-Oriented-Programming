//Q#16.Calculate the sum of even numbers from 1 to 100 using for loop.
#include <iostream>
using namespace std;
int main(){
	int sum = 0 , number = 100 ;
	for ( int number = 0; number < 100; number++ ){
		if ( number%2 == 0 ) {
			sum = sum + number ;
}
}
	cout << "The sum of first " << number << " even numbers is: " << sum << endl ;
return 0;
}