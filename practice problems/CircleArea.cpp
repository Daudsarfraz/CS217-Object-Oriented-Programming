#include <iostream>
using namespace std;
class Shape 
{
private: // private access specifire 
float size=20;
protected: // protected  access specifire 
float area=34; 

public: // public  access modifire
float volume =33;
void draw()
{
cout<< "Parent Class: Shape:";
}
void dispalySize()
{
cout<< "Parent Class: size:"<<size;
}
} ;
class Cricle : public Shape // public inheri...
{
public:
void draw()
{
cout<< "Child Class: Circle:"<<endl;

// because its public Inheritance we can access  (public, procted) member 
//with out creating object in child class
cout<< "Partent Class Area:" << area<<endl; // proctected
cout<< "Partent Class Volume:" << volume<<endl; // public
dispalySize();
}
};
int main ()
{
    Cricle circle;
     // We are accessing public variable of Parent class though child class object
    cout<< "Shape Volume"<< circle.volume<<endl;
circle.draw();
}