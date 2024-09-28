#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void accept() //( Complex *const this)
    {
        cout << "Enter real and imag values";
        cin >> this->real >> this->imag;
    }
    void print()
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << imag << endl;
    }
};

int main()
{
    Complex c1;
    c1.accept(); //accept(&c1)
    c1.print();
    return 0;
}