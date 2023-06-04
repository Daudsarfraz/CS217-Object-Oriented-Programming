#include <iostream>
using namespace std;
class Sum { 	
  int x, y ; // declaration of variable to store input

public:
  void input() {
    cout << "Plz enter First integer: " ; // msg for taking input
    cin >> x ; // user input
    cout << "Plz enter Second integer: " ; // msg for taking input
	cin >> y ; // user input
  }
  void sum() {
    cout << "Sum is:  " << x + y;
  }
};
int main(){
   Sum s; // an object of the class
   s.input(); //  calling 
   s.sum(); // calling
   return 0;
}