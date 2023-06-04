#include<iostream>
using namespace std;
class Account{
	private:
    	int AccountNumber;
    	double balance=0.0;
	public:
    		Account(int AccountNumber,double balance )
    {
      			this->AccountNumber = AccountNumber;
      			this->balance = balance;
    }
    int getaccountnumber(){
        cout << "Please enter your ACCOUNT NUMBER: " << endl;
        cin >> AccountNumber;
        return AccountNumber;
    }
    int getbalance(){
        cout << "Please enter your BALANCE: "<<endl;
        cin>>balance;
        return balance;
    }
    void setbalance(){
    balance=balance;
    }

    void credit(double amount){
        if (this-> balance>=amount)
        	balance = balance + amount;
        	
        else if(this->balance<=amount)
        	balance=balance-amount;

    }
    void debit(double amount){
        if (amount>=balance)
            cout<<"SORRY! You don't have enough BALANCE: ";
    }
    void print(){
        cout<<"ACCOUNT NUMBER: "<<AccountNumber<<" Balance: "<<balance;
    }
};
int main(){
    Account AC(0,0);
    AC.getbalance();
    AC.getaccountnumber();
    AC.credit(898464);
    AC.setbalance();
    AC.print();
    AC.debit(898464);
    
	return 0;
}