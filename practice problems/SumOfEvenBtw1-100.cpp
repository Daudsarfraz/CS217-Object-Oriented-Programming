#include <iostream>
using namespace std;
int main(){
    int i , number , sumOfEven ;
    	sumOfEven = 0 ;
	number = 100 ;
   	 i = 0 ;
do{
	if(i%2==0)
    	sumOfEven +=  i ;
 			i++ ;
}while(i<=number);
cout << "The sum of EVEN numbers b/w 1 ----> 100 is = " << sumOfEven ;
    return 0 ;
}