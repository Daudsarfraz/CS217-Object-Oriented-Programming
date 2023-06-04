#include <iostream>
#include <string.h>
using namespace std;
class Student{
    int Roll; 
    char Name[25];
    float Marks;
    public: 
    Student (int r,char nm[],float m) {
        Roll =  r;
        strcpy (Name, nm);
        Marks = m;
        } 
    void Display(){
        cout<<"\n\tRoll"<< Roll;
        cout<<"\n\tName "<< Name;
        cout<<"\n\tharks "<< Marks; 
    }
};
int main(){
    Student S(2, "Dawood Sarfraz", 78.63);
    //Creating object and passing votes to constructor
    S.Display();
    //Dsplaying Student Details
    return 0;
}
