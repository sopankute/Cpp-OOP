#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
    static int counter;

public:
    Complex()
    {
        this->real = 0;
        this->imag = 0;
    }

    void setCounter(int counter)
    {
        this->counter = counter;
    }

    void printComplex()
    {
        cout << "Counter value  = " << counter << endl;
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};
int Complex::counter = 0;

int main()
{
    Complex c1;
    c1.printComplex();
    Complex c2;
    c2.printComplex();
    Complex c6;
    Complex c7;
    c7.setCounter(10);
    Complex c3;
    Complex c4;
    Complex c5;
    c5.printComplex();
    c2.printComplex();
    c1.printComplex();
    return 0;
}