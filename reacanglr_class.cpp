#include <iostream>
using namespace std;

class rectangle{
public:
      // declaration of length and width
      double length;
      double width;  

      double area(){
        return length * width;
      }

      double peri(){
        return 2*(length+width);
      }
};

class circle{
public:
      // declaration of radius
      double radius;

      // function 
      double area(){
        return 3.14*radius*radius;
      }
};

int main(){
    // r1,r2 is the object
    rectangle r1,r2;

    //assigning values to variable
    r1.length = 8;
    r1.width = 8;

    r2.length = 4;
    r2.width = 7;

    //call the function
    cout << r1.area() << endl;
    cout << r1.peri() << endl;

    cout << r2.area() << endl;
    cout << r2.peri() << endl;

    circle rad;
    rad.radius = 4;
    cout << rad.area() << endl;
    return 0;
}