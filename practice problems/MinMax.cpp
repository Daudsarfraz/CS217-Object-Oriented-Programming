// Q#5.Write a function which will calculate Maximum Number?
#include <iostream>
using namespace std;
int max(int num1, int num2);
int main(){
int a = 100,  b = 200, ret;
ret = max(a, b);
cout << "Maximum value is = "<< ret << endl;
return 0;}
int max(int num1, int num2){
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}