/*Q#19.Write a table of a number entered by the user 
using for loop. Take the table number and the
end limit from the user.*/
#include <iostream>
using namespace std;
int main(){
int tableNo, limit ;
	cout << "Enter Table No: " ;
		cin >> tableNo ;
	cout << "Enter Ending No: " ;
		cin >> limit ;
for ( int i = 1; i <= limit; i++ ){
	cout << tableNo << " x " << i << " = " << tableNo * i << endl ;
}
return 0;
}