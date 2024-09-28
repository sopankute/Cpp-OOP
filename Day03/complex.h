#ifndef COMPLEX_H_
#define COMPLEX_H_
class Complex
{
private:
    int real;
    int imag;

public:
    Complex();
    Complex(int real, int imag);
    void setReal(int real);
    int getReal();
    void acceptComplex();
    void printComplex();
};

#endif