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
        counter++;
        this->real = 0;
        this->imag = 0;
    }

    static void setCounter(int counter)
    {
        Complex::counter = counter;
    }

    static int getCounter()
    {
        return counter;
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
    cout << "Current counter value = " << Complex::getCounter() << endl;
    Complex c1;
    c1.printComplex();
    Complex c2;
    Complex c6;
    Complex c7;
    Complex::setCounter(10);
    Complex c3;
    Complex c4;
    Complex c5;
    cout << "Current counter value = " << Complex::getCounter() << endl;
    return 0;
}