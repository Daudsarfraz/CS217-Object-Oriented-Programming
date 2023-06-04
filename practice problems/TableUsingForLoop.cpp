#include <iostream>
using namespace std ;
int main(){
	int i , num , limit ;
	cout << "Which table you want to print ?" << endl ;
	cout << "Plz enter your number = " ;
		cin >> num ;
	cout << "what should be your table limit ?" << endl ;
	cout << "Plz enter your table limit = " ;
		cin >> limit ;
	for(i=1 ; i<=limit ; i++){
		cout << num << " * " << i << " = " << num * i << endl ;
}
return 0 ;
}