#include<iostream>
#include<string.h>
using namespace std;
class sum{
    public:
        sum(int l,int m,int n);
        sum(int l,int m);
    
};
int main(){
    sum s1=sum(3,4,5);
    sum s2=sum(3,4);
    return 0;
}
sum::sum(int l,int m,int n){
    cout<<"Sum of three integer is = "<<(l+m+n)<<endl;
}
sum::sum(int l,int m){
    cout<<"Sum of two integer is = "<<(l+m)<<endl;
}