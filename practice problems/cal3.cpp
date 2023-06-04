# include <iostream>
using namespace std;
int main(){
    char operater;
    float numberOne, numberTwo;
    cout << "Enter one of these operators for calculation."<<endl;
    cout << "Enter ' + ' operator for ADDITION."<<endl;
    cout << "Enter ' - ' operator for SUBTRACTION."<<endl;
    cout << "Enter ' * ' operator for MULTIPLICATION."<<endl;
    cout << "Enter ' / ' operator for DIVISION."<<endl;
    cout << "Enter Operator = ";
    cin >> operater;
    cout << "Enter two numbers."<<endl;
    cout << "Enter First number = ";
    cin >> numberOne;
	cout << "Enter Second number = ";
    cin >> numberTwo;
	if(operater == '+'){
            cout <<"Addition of two numbers is = "<< numberOne + numberTwo;
        }
    else if(operater == '-'){
            cout <<"Subtraction of two numbers is = "<< numberOne - numberTwo;
        }
 	else if(operater == '*'){
            cout <<"Multiplication of two numbers is = "<< numberOne * numberTwo;
        }
 	else if(operater == '/'){ 
            cout <<"Division of two numbers is = "<< numberOne / numberTwo;
        }
 	else{
      	    cout << "Error!Your entered operator is incorrect.";   
    }
    return 0;
}