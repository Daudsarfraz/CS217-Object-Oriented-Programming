#include <iostream>
using namespace std;
class Car // Class
{	
	
};
int main () {
	Car Electric;
	Car Lamb;
	Car Ferrari;
}



#include <iostream>
using namespace std;
class Date {
	// access sprcifer
	private:
		// data members
		int y, m, d ;
	public:
		void getDate()
		{
			cout << "Plz enter the year: "; // msg for taking input
			cin >> y ; // user input
			cout << "Plz enter month: "; // msg for taking input
			cin >> m ; // user input
			cout << "Plz enter day: "; // msg for taking input
			cin >> d ;
		}		
	void printDate(){
		cout << "Today the date is: ";
		cout << d << "/" << m << "/"<< y ;
	}


};// end of class body
int main(){
	// declare an object of class date
	Date date;
	// access member of function
	date.getDate(); // Calling function
	date.printDate(); // calling function
	return 0;
}