#include <iostream>
using namespace std;

class Complex
{
private:
    const int real;
    int imag; //balance

public:
    Complex(int real, int imag) : real(real) //It must be done in ctor members initializer list
    {
        cout << "Inside parameterized ctor" << endl;
        //this->real = real; //cannot be done inside the ctor body
        this->imag = imag;
    }

    int getReal() const
    {
        return this->real;
    }

    void acceptComplex()
    {
        cout << "Enter  imag=";
        cin >> imag;
    }

    void printComplex() const
    {
        //this->imag = 50; // cannot do this
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};

int main()
{
    Complex c1(1001, 20);
    c1.printComplex();
    c1.acceptComplex();
    c1.printComplex();
    return 0;
}
