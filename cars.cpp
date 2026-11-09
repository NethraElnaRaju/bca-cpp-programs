#include <iostream>
using namespace std;

class Car
{
public:
    string brand, model;
    int speed;

    void accelerate(int amount)
    {
        speed += amount;
    }

    void display()
    {
        cout << brand << " " << model << " " << speed << " km/h" << endl;
    }
};

int main()
{
    Car c1, c2;

    c1.brand = "Maruti";
    c1.model = "Swift";
    c1.speed = 20;

    c2.brand = "Hyundai";
    c2.model = "i20";
    c2.speed = 30;

    c1.accelerate(20);
    c2.accelerate(10);

    c1.display();
    c2.display();

    return 0;
}