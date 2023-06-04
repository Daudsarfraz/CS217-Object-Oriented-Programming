# include <iostream>
using namespace std ;
int main(){
    char operatar ;
    float firstNumber , secondNumber ;
    cout <<"CALCULATOR BY IF ELSE STATEMENT:"<<endl;
    cout << "Enter two numbers." << endl ;
    	cout << "Enter First number = " ;
    		cin >> firstNumber ;
	cout << "Enter Second number = " ;
    		cin >> secondNumber ;  
   	cout << "Enter one of these operators for calculation." << endl ;
    	cout << "Enter ' - ' operator for SUBTRACTION." << endl ;
	cout << "Enter ' + ' operator for ADDITION." << endl ;
	cout << "Enter ' / ' operator for DIVISION." << endl ;
    	cout << "Enter ' * ' operator for MULTIPLICATION." << endl ;	
   	cout << "Enter Operator = " ;
   		cin >> operatar ;  
	if (operatar == '+') {
        cout <<"Addition of "<< firstNumber <<" and "<< secondNumber <<" is = "<<firstNumber + secondNumber ; }
    	else if (operatar == '-') {
        cout <<"Subtraction of "<<firstNumber<<" and "<<secondNumber<<" is = "<<firstNumber - secondNumber ; }
 	else if (operatar == '*') {
        cout <<"Multiplication of "<< firstNumber <<" and "<< secondNumber <<" is = "<<firstNumber * secondNumber ; }
 	else if (operatar == '/') { 
        cout <<"Division of "<<firstNumber<<" and "<<secondNumber<<" is = "<<firstNumber / secondNumber ; }
 	else{
      	    cout << "SORRY! Your entered operator is INCORRECT." ;   }
    return 0 ;
}