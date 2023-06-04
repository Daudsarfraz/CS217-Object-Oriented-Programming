#include <iostream>
using namespace std ;
int main(){
	int i,sumOfOdd,number ;
		i=0 ;
		sumOfOdd = 0 ;
		number = 100 ;
	while(i <= number){
		if (i%2 == 1)
			sumOfOdd += i ;
			i++ ;
	 } 
	 cout << "The sum of ODD numbers b/w 1 ----> 100 is = " <<sumOfOdd ;
	 return 0 ;
}