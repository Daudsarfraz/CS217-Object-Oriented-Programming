#include<iostream>
using namespace std;
int main(){
	int Age[5];
for (int x=0;x<5;x++){
	cout<<"	\nEnter user "<< x+1<<" Age: ";
	cin>>Age[x];
}
for (int y=0;y<5;y++){
	cout<<"	\nUser "<< y+1<<" age is: "<<Age[y]<<endl;
}
	return 0;
}