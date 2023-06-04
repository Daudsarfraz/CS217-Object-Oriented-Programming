// protected Inheritance example
#include <iostream>
using namespace std;
class Shape 
{
private: // private access specifire 
float size = 20;
protected: // protected  access specifire 
float area=34; 

public: // public  access modifire
float volume = 33;
void draw()
{
cout<< "Parent Class: Shape:";
}
void dispalySize()
{
cout<< "Parent Class: size:"<<size;
}
} ;
class Cricle : protected Shape 
{

public:
void draw()
{
cout<< "Child Class: Circle:"<<endl;
cout<< "Partent Class Area:" << area<<endl; // proctected
cout<< "Partent Class Volume:" << volume<<endl; // public
dispalySize();
}
};
int main ()
{
    Cricle circle;
    //cout<< "Shape Volume"<< circle.volume<<endl;
circle.draw();
}