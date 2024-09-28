#include <iostream>
using namespace std;

class Base
{
public:
    void f1()
    {
        cout << "Inside Base::f1()" << endl;
    }
    virtual void f2() // virtual function
    {
        cout << "Inside Incomplete Base::f2()" << endl;
    }
};

class Derived : public Base
{
public:
    void f2() // Function overriding
    {
        cout << "Inside Complete Derived::f2()" << endl;
    }
    void f3()
    {
        cout << "Inside Derived::f3()" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->f1();
    b->f2(); //D::f2() // Late Binding

    d.f2();
    return 0;
}