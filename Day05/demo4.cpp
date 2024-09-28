#include <iostream>
using namespace std;

class Base
{
public:
    void f1()
    {
        cout << "Inside Base::f1()" << endl;
    }
    void f2()
    {
        cout << "Inside Base::f2()" << endl;
    }
};

class Derived : public Base
{
public:
    void f3()
    {
        cout << "Inside Derived::f3()" << endl;
    }
};

int main()
{
    Base b;
    b.f1(); //B:f1
    b.f2(); //B::f2

    Derived d;
    d.f1(); //B:f1
    d.f2(); //B:f2
    d.f3(); //D:f3
    return 0;
}