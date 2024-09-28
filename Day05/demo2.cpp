#include <iostream>
using namespace std;

class A
{
protected:
    int num1;

public:
    void printA()
    {
        cout << num1;
    }
    friend void fun1();
};
void fun1()
{
    A a;
    a.num1;
}
class B : protected A
{
private:
    int num2;

public:
    void printB()
    {
        cout << num2 << num1;
    }
};

class C : protected B
{
private:
    int num3;

public:
    void printC()
    {
        cout << num3 << num1;
    }
};

int main()
{
    A a;
    a.num1;
    B b;
    b.num1;
    C c;
    return 0;
}