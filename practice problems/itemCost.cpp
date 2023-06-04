#include<iostream>
using namespace std;
int main(){
	int items[4] = {34,45,56,37};
	int cost[4] = {23,78,89,33};
	cout.width(5);
	cout<<"ITEMS";
	cout.width(8);
	cout<<"COST";
	cout.width(15);
	cout<<"TOTAL VALUES"<<"\n";
	int sum = 0;
	for(int i = 0;i < 4; i++)	{
		cout.width(5);
		cout <<items[i];
		cout.width(8);
		cout << cost[i];
		int value = items[i] * cost[i];
		cout.width (15);
		cout<<value<<"\n";
		sum = sum + value;
	}
	cout << "\nTotal = "<< sum;
	return 0;
}