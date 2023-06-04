#include <iostream> // Import library for input and output
using namespace std;
int main(){ // main function
int *pc,c; // declare variable and pointer
c = 5; // assign value to variable c
cout<<"Address of c (&c): "<< &c <<endl; // Address of variable c
cout<<"Value of c (c): "<< c << endl << endl; //Value of c
pc = &c ; //Pointer pc holds the memory address of variable c
cout<<"Address that pointer pc hold (pc): "<<pc<<endl; 
cout<<"Content of the address pointer pc holds(*pc): "<< *pc << endl << endl;
c = 11 ; //The content inside memory address &c is changed from 5 to 11.
cout<<"Address pointer pc holds (pc): "<<pc<<endl; // Address of pc
cout<<"Content of the address pointer pc holds (*pc): "<<*pc<<endl; // value store at *pc
*pc = 2 ; 
cout<<"Address of c(&c): "<<&c<<endl; // Address of c
cout<<"Address of c(&c): "<<&c<<endl; // Address of c
	return 0;
}