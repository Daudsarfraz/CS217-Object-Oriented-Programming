#include<iostream>
using namespace std;
int frequency(int a[], int n, int x)
{
	int count = 0;
	for (int i=0; i < n; i++)
	if (a[i] == x)
		count++;
	return count;
}
int main() {
	int a[] = {0, 5, 5, 5, 4,66,3,1,6,6,32,12,6,7,5,4,6};
	int x = 6;
	int n = sizeof(a)/sizeof(a[0]);
	cout <<"The frequency of "<< x <<" is = "<< frequency(a, n, x);
	return 0;
}