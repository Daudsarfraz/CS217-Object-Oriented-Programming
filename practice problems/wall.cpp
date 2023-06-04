#include <iostream>
using namespace std;

// declaration a class
class Wall {
   private:
    double length;
    double height;

   public:
    // create parameterize constructor
    Wall(double len, double hgt) {
        // initialization of private variables
        length = len;
        height = hgt;
    }

    double calculateArea() {
        return length * height;
    }
};

int main() {
    // createtion of object and initialize data members
    Wall wall1(100.53, 18.66);
    Wall wall2(86.52, 64.63);
    

    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}
