
# include <iostream>
using namespace std ;
int main() {
    char operatar ;
    float firstNumber , secondNumber ;
    cout <<"CALCULATOR BY SWITCH METHOD:"<<endl;
    cout << "Enter two numbers."<< endl;
    	cout << "Enter First number = " ;
    		cin >> firstNumber ;
	cout << "Enter Second number = " ;
    	cin >> secondNumber ;  
   	cout << "Enter one of these operators for calculation." << endl ;
    	cout << "Enter ' - ' operator for SUBTRACTION." << endl ;
	cout << "Enter ' + ' operator for ADDITION."<< endl ;
	cout << "Enter ' / ' operator for DIVISION."<< endl ;
    	cout << "Enter ' * ' operator for MULTIPLICATION." << endl ;	
   	cout << "Enter Operator = " ;
   		cin >> operatar ;  	
    	switch(operatar) {
    		case '-' :
cout << "Subtraction of " << firstNumber << " and " << secondNumber << " is = " <<firstNumber - secondNumber ;
            						break ;
        		case '+' :
cout << "Addition of " << firstNumber << " and " << secondNumber << " is = " << firstNumber + secondNumber ;
            						break ;
		case '/' :
        cout << "Division of " << firstNumber << " and " << secondNumber << " is = " << firstNumber / secondNumber ;
            						break ;     	
        		case '*' :
      cout << "Multiplication of " << firstNumber << " and " << secondNumber << " is = " << firstNumber * secondNumber ;
            						break ;     
        	default:
        cout << "SORRY! You have entered INVALID operatar." ;
            						break ; }
    return 0 ;
}