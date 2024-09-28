#include <iostream>
using namespace std;

class Engine
{
private:
    int cc;
    double fuel;

public:
    void acceptEngine()
    {
        cout << "Enter cc and fuel capacity = " << endl;
        cin >> this->cc >> this->fuel;
    }
    void printEngine()
    {
        cout << "CC = " << this->cc << endl;
        cout << "Fuel capacity = " << this->fuel << endl;
    }
};

class LedLight
{
};

class Bike
{
private:
    Engine e;
    int price;

public:
    void acceptBike()
    {
        e.acceptEngine();
        cout << "Enter price =";
        cin >> this->price;
    }
    void printBike()
    {
        e.printEngine();
        cout << "Price = " << this->price << endl;
    }
};

int main()
{
    Bike b;
    b.acceptBike();
    b.printBike();
    return 0;
}