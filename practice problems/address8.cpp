#include <iostream>
using namespace std;
void swap(int *x, int *y){
	int swap;
	swap = *x;
	*x = *y;
	*y = swap;
}
int main(){
	int x = 500;
	int y = 1000;
	swap(&x ,&y);
	cout <<"The value of x is = "<< x <<endl;
	cout <<"The value of y is = "<< y <<endl;
}
