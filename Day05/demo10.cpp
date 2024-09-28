#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void calculateArea() = 0;
    virtual void accept() = 0;
};

class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int radius)
    {
        this->radius = radius;
    }
    void calculateArea()
    {
        cout << "Area of Circle = " << this->radius * this->radius * 3.14 << endl;
    }
    void accept()
    {
        cout << "Enter radius=";
        cin >> this->radius;
    }
};

class Square : public Shape
{
private:
    int side;

public:
    Square(int side)
    {
        this->side = side;
    }
    void calculateArea()
    {
        cout << "Area of Square = " << this->side * this->side << endl;
    }
    void accept()
    {
        cout << "Enter side=";
        cin >> this->side;
    }
};

class Rectangle : public Shape
{
private:
    int length;
    int breadth;

public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    void calculateArea()
    {
        cout << "Area of Rectangle = " << this->length * this->breadth << endl;
    }
    void accept()
    {
        cout << "Enter Length and Breadth=";
        cin >> this->length >> this->breadth;
    }
};

int main()
{
    int choice;
    Shape *s;
    Circle c(10);
    Square sq(10);
    Rectangle r(12, 20);
    do
    {
        cout << "0.Exit" << endl;
        cout << "1.Area of Circle" << endl;
        cout << "2.Area of Rectangle" << endl;
        cout << "3.Area of Square" << endl;

        cout << "Enter Choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            s = &c;
            break;
        case 2:
            s = &r;
            break;
        case 3:
            s = &sq;
            break;

        default:
            break;
        }
        s->accept();
        s->calculateArea();

    } while (choice != 0);
}