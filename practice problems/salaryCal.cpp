#include <iostream>
using namespace std;
int main(){
	float salary,fund,deductionRate,amount;
	cout << "Plz Enter your salary = ";
	cin >> salary;
	if (salary >= 10000 && salary <+ 20000){
		fund = 1000;
		amount = salary - fund;
		cout <<"This amount is deducted from your saraly = "<<fund<<endl;
		cout <<"After payment of Fund your Total amount is amount = "<<amount;
	}
	else if(salary >= 20000){
		deductionRate = 0.07;
		amount = salary * deductionRate;
		cout<<"Your salay is equal to and greater than 20000."<<endl;
		cout <<"So your deduction rate is = "<<deductionRate<<endl;
		cout << "After fund deduction your salay is = "<< amount;
	}
	else {
	cout <<"Your salay is NOT equal to and less than 10000.So you are NOT able to pay FUND.";
	}
	return 0;
}