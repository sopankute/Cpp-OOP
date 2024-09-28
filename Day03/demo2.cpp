#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int real, int imag) : real(real), imag(imag) //Ctor members initializer List
    {
        cout << "Inside parameterized ctor" << endl;
        // this->real = real;
        // this->imag = imag;
    }
    void printComplex()
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};

int main()
{
    Complex c1(10, 20);
    c1.printComplex();
    Complex c2(100, 200);
    c2.printComplex();

    return 0;
}