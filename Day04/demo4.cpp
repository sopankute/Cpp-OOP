#include <iostream>
using namespace std;

class Complex
{
private:
    int *real;
    int imag;

public:
    Complex(int real, int imag)
    {
        cout << "Inside Ctor" << endl;
        this->real = new int;
        *this->real = real;
        this->imag = imag;
    }

    void setReal(int real)
    {
        *this->real = real;
    }

    void printComplex()
    {
        cout << "Real = " << *this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }

    ~Complex()
    {
        cout << "Inside Dtor" << endl;
        delete this->real;
        this->real = NULL;
    }

    Complex(Complex &other)
    {
        cout << "Inside Copy Ctor" << endl;
        /*int num1 = 20, num2 = 30;
        int *ptr1 = &num1;
        int *ptr2 = &num2;
        num1 = num2;
        *ptr1 = *ptr2;*/
        this->real = new int;
        *this->real = *other.real;
        this->imag = other.imag;
    }
};

int main()
{
    Complex c1(10, 20);
    c1.printComplex(); //10,20
    Complex c2 = c1;
    c2.printComplex(); //10,20
    c1.setReal(50);
    c1.printComplex(); //50,20
    c2.printComplex(); // 10,20

    return 0;
}