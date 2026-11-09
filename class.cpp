// class
#include <iostream>
using namespace std;

class student{
public:
       int roll;
       string name;
       
       void display(){
        cout << "NAME : " << name << " ROLL NO IS : " << roll << endl;
       }
};

int main(){
    student s1;
    student s2;
    
    s1.name = "nethra";
    s1.roll = 36;

    s2.name = "elna";
    s2.roll = 35;

    s1.display();
    s2.display();
    return 0;
}