#include <iostream>
using namespace std;

template <class T>
class Complex
{
private:
    T real;
    T imag;

public:
    Complex(T real, T imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void setReal(T real)
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
    Complex<double> c1(10.50, 20.20);
    c1.printComplex();

    return 0;
}
