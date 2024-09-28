#include <iostream>
#include "complex.h"
using namespace std;

Complex::Complex()
{
    cout << "Inside default parameterless Ctor" << endl;
    this->real = 10;
    this->imag = 20;
}
Complex::Complex(int real, int imag)
{
    cout << "Inside parameterized ctor" << endl;
    this->real = real;
    this->imag = imag;
}

void Complex::setReal(int real) // Mutator or Setter
{
    this->real = real;
}

int Complex::getReal() //Inspector or Getter
{
    return this->real;
}

void Complex::acceptComplex()
{
    cout << "Enter real and imag=";
    cin >> this->real >> this->imag;
}

void Complex::printComplex()
{
    cout << "Real = " << this->real << endl;
    cout << "Imag = " << this->imag << endl;
}