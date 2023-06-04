#include<iostream>
using namespace std;
class Circle
{
    public:
        double radius;
        double computerArea()
        {
            return 3.14*radius*radius;
        }
};
int main()
{
    Circle obj;
    obj.radius = 5.5;
    cout<<"Radius is : "<<obj.radius<<"\n";
    cout<<"Area is : "<<obj.computerArea();
    return 0;
}
