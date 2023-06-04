#include <iostream>
using namespace std;
int main() {
int tryNo = 0 ;
char guess ;
do {
	cout << "Enter character(a-z) to guess:" ;
		cin >> guess ;
if (guess == 's') {
	cout << "Congratulations..." ;
		tryNo = 6 ;}
else {
		tryNo++ ;}
}
	while ( tryNo < 5 ) ;
return 0;
}