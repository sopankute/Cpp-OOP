#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex()
    {
        cout << "Inside default parameterless Ctor" << endl;
        this->real = 10;
        this->imag = 20;
    }
    Complex(int real, int imag)
    {
        cout << "Inside parameterized ctor" << endl;
        this->real = real;
        this->imag = imag;
    }
    void printComplex()
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }

    ~Complex()
    {
        cout << "Inside Dtor" << endl;
        printComplex();
    }
};

int main()
{
    Complex c1;
    c1.printComplex(); // printComplex(&c1)
    Complex c2(100, 200);
    //c2.printComplex(); // printComplex(&c2)
    return 0;
}