#include <iostream>
using namespace std;

class A
{
public:
    int num1;
    void printA()
    {
        cout << num1;
    }
};

class B : virtual public A
{
public:
    int num2;
    void printB()
    {
        cout << num2 << num1;
    }
};

class C : virtual public A
{
public:
    int num3;
    void printC()
    {
        cout << num3 << num1;
    }
};

class D : public B, public C
{
public:
    int num4;
    void printD()
    {
        cout << num4 << num2 << num3 << num1;
    }
};

int main()
{
    D d;
    d.printD();
    return 0;
}