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
    	switch(operater){
        	case '+':
            		cout <<"Addition of two numbers is = "<< numberOne + numberTwo;
            		break;
        	case '-':
            		cout <<"Subtraction of two numbers is = "<< numberOne - numberTwo;
            		break;
        	case '*':
            		cout <<"Multiplication of two numbers is = "<< numberOne * numberTwo;
            		break;
        	case '/':
            		cout <<"Division of two numbers is = "<< numberOne / numberTwo;
            		break;
        	default:
           		cout << "Error!Your entered operator is incorrect.";
            		break; }
    return 0;
}