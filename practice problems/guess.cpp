//Q#9
#include <iostream>
using namespace std;
int main() {
int tryNo = 0 ;
char guess ;
do {
	cout << "Enter character (a-z) to guess:";
		cin >> guess ;
if (guess == 's') {
	cout << "Congratulations ------->";
		break ;}
else {
		tryNo = tryNo + 1;}
}
while (tryNo < 5);
return 0;
}