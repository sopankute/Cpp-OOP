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
        cout << "Inside my ctor" << endl;
        this->real = 10;
        this->imag = 20;
    }

    void accept()
    {
        cout << "Enter real and imag values";
        cin >> this->real >> this->imag;
    }
    void print()
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};

int main()
{
    Complex c1;
    //c1.accept();
    c1.print();
    return 0;
}