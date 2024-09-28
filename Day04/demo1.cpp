#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void setReal(int real)
    {
        this->real = real;
    }

    void printComplex()
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
    Complex(Complex &other)
    {
        cout << "Inside copy ctor" << endl;
        this->real = other.real;
        this->imag = other.imag;
    }
};

int main()
{
    Complex c1(10, 20);
    c1.printComplex();
    Complex c2 = c1; //c2.Complex(c1)
    c1.setReal(1000);
    c1.printComplex();
    c2.printComplex();
    return 0;
}