#include<iostream>
using namespace std;
void add(int &, int &) ;
int main(){
int x, y;
cout<<"enter the 1st number = ";
cin>>x;
cout<<"enter the 2nd number = ";
cin>>y;
cout<<"address of the numbers are " <<&x <<"\t & \t"<<&y << endl;
add(x, y) ;}
void add(int & x, int & y){
int Total;
Total=x+y;
cout<<"total is "<<Total<<endl;}
