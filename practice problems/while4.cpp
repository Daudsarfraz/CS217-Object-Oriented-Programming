//Q#6.Calculate the sum of numbers from 1 to 100
#include <iostream>
using namespace std;
int main()
{
int num = 1;
int sum = 0;
while(num <= 100){
	sum = sum + num;
	num++;
}
	cout << "The sum of first " << num - 1 << " number is: " << sum << endl;
return 0;
}