#include <iostream>
#include <iomanip>
using namespace std;
const int pi = 3.14159625;
int main()
{
    double radius = 12.67;
    double height = 12;
    cout << fixed <<showpoint;
    cout << setprecision(2)
        << "Set precisioon (2) "<<endl;
    cout <<"radius = "<< radius<<endl;
    cout <<"height = "  << height << endl;
    cout << "volume = "<< radius * height * pi << endl<<endl;;

    cout << setprecision(3)
        << "Set precisioon (3) "<<endl;
    cout <<"radius = "<< radius<<endl;
    cout <<"height = "  << height << endl;
    cout << "volume = "<< radius * height * pi << endl<<endl;

    cout << setprecision(4)
        << "Set precisioon (4) "<<endl;
    cout <<"radius = "<< radius<<endl;
    cout <<"height = "  << height << endl;
    cout << "volume = "<< radius * height * pi << endl<<endl;


    cout <<setprecision(3) << radius <<endl
        <<setprecision(4) << height  <<endl
        <<setprecision(5) << pi;
}