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
    friend void sum(Complex c1, Complex c2);
};

void sum(Complex c1, Complex c2)
{
    cout << "Addition of real= " << c1.real + c2.real << endl;
    cout << "Addition of imag= " << c1.imag + c2.imag << endl;
}

int main()
{
    Complex c1(10, 20);
    c1.printComplex();
    Complex c2(30, 40);
    c2.printComplex();
    sum(c1, c2);
    return 0;
}