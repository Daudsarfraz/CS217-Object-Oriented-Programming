//Q#10.Calculate the sum of numbers from 1 to 100 using do-while loop.
#include <iostream>
using namespace std;
int main(){
	int num = 1 ;
	int sum = 0 ;
do{
	sum = sum + num ;
	num++ ;
}
	while ( num <= 100 ) ;
cout << "The sum of first " << num - 1 << " number is:\t " << sum << endl;
return 0;
}
