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
    friend Complex operator+(Complex c1, Complex c2);
};

void sum(Complex c1, Complex c2)
{
    cout << "Addition of real= " << c1.real + c2.real << endl;
    cout << "Addition of imag= " << c1.imag + c2.imag << endl;
}

Complex operator+(Complex c1, Complex c2)
{
    Complex c3(0, 0);
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main()
{
    Complex c1(10, 20);
    c1.printComplex();
    Complex c2(30, 40);
    c2.printComplex();
    //sum(c1, c2);
    Complex c3 = c1 + c2; //operator+(c1,c2)
    c3.printComplex();
    return 0;
}