#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	ofstream outFile;
	double test1 = 20.978575, test2 = 99.3434, test3 = 70.3477, test4 = 89.3423423, test5 = 68.65334;
	double average = 69.73307146;
	string firstName = "Dawood";
	string lastName = "Sarfraz";
	outFile.open("testavg.txt");
	outFile << fixed << showpoint;
	outFile << setprecision(2);
	cout << "Processing Data" << endl;
	outFile <<"Student name: " << firstName
		<< " " << lastName << endl;
	outFile << "Test scores: " << setw(6) << test1
			<< setw(6) << test2 << setw(6) << test3
			<< setw(6) << test4 << setw(6) << test5
			<< endl;
	average = (test1 + test2 + test3 + test4 + test5) / 5.0;
	outFile << "Average test score: " << setw(6)
			<< average << endl;
	outFile.close();
	return 0;
}