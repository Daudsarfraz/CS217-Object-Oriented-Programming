#include<iostream>
using namespace std;
int fact(int *a)
        {
                        int factorial=1;
            while(*a>1){
                factorial*=*a;
                *a=*a-1;
                }
return(factorial);
        }
        int main()
        {
            int num, factorial,c;
            cout<<"please enter a number:";
            cin>>num;
            c=fact(&num);
            cout<<"factorial is = "<<c;
            return 0;
            }