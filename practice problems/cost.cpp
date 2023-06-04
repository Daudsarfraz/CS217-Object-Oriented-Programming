//Q#8
#include <iostream>
using namespace std;
void change(int cost);
int main(){
	int cost = 10;
	change (cost);
	cout <<"The Value of COST is = "<< cost <<endl;
	return 0;
}
void change(int cost){
	cost = 20;
}
