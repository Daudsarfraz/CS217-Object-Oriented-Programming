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
int main(void){
    Employee el = Employee (101, "Dawood", 20000); //creating an object of Employee 
    Employee e2 = Employee (102, "Sultan", 50000);
    el.display();
    e2.display();
return 0;
}
