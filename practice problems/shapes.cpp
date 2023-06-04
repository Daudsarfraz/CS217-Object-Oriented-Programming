#include<iostream>
using namespace std;


class Shape
{


public :
void draw() { cout<<"Shape Parent Class";}
};


class Circle: public Shape{
public :
void draw() { cout<<"Child Circle Class";}
};


class Rectangle: protected Shape{
public :
void draw() { cout<<"Child Rectangle Class";}
};


class Triangle: private Shape{
public :
void draw() { cout<<"Child Triangle Class";}
};


int main ()
{
Circle circle;
Rectangle rectangle;
Triangle triangle;

return 0;
}
