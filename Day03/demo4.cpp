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

    void setReal(int real) // Mutator or Setter
    {
        this->real = real;
    }

    int getReal() //Inspector or Getter
    {
        return this->real;
    }

    void acceptComplex()
    {
        cout << "Enter real and imag=";
        cin >> this->real >> this->imag;
    }

    void printComplex()
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};

int main()
{
    Complex c1;
    //c1.real = 50;
    c1.printComplex();
    c1.setReal(50);
    cout << "Value of Real using Inspector= " << c1.getReal() << endl;
    c1.printComplex();
    return 0;
}
