//Q#13.Write the table of 5 using do-while loop.
#include<iostream>
using namespace std;
int main(){
int counter = 1 ;
do{
cout<<"5 X "<<counter<<" = "<< 5 * counter << endl ;
		counter++ ;
}
while ( counter <= 10 ) ;
return 0;
}