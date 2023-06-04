//Q#7.Calculate the sum of even numbers from 1 to 100
#include <iostream>
using namespace std;
int main(){
	int num = 1;
	int sum = 0;
	while(num < 100){
	if(num%2 == 0){
		sum = sum + num;
}
	num++;
}
cout << "The sum of first " << num - 1 << " even numbers is: " << sum << endl;
return 0;
}