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
        cout << "Inside parameterized ctor" << endl;
        this->real = real;
        this->imag = imag;
    }

    void setReal(int real)
    {
        this->real = real;
    }

    int getReal() const
    {
        return this->real;
    }

    void acceptComplex()
    {
        cout << "Enter  imag=";
        cin >> this->real >> this->imag;
    }

    void printComplex() const
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};

int main()
{
    const Complex c1(10, 20);
    //c1.acceptComplex(); //Not OK
    c1.printComplex();
    return 0;
}
