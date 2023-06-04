#include <iostream>
using namespace std; 
class Employee {
    public:
        int id; //data member (also instance variable) 
        string name; //data member(also instance variable)
        float salary;
        Employee(int i, string n, float s){
            id = i;
            name = n;
            salary = s;
        }
        void display(){
            cout<<id<<" "<<name<<" "<<salary<<endl;
        }
    };
int main(void) {
    Employee el = Employee (10134, "USMAN", 90000); //creating an object of Employee 
    Employee e2 = Employee (10342, "SALMAN", 30000);
    el.display(); 
    e2.display();
    return 0;
}