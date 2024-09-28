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
        delete this->real;
        this->real = NULL;
    }
};

int main()
{
    Complex c1(10, 20);
    c1.printComplex();
    Complex c2 = c1;
    c2.printComplex();
    c1.setReal(50);
    c1.printComplex();
    c2.printComplex();
    //It has a problem as all pointers in all objects is pointing at same dynamically
    //allocated memory
    return 0;
}