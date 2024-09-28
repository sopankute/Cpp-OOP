#include <iostream>
using namespace std;

class Complex
{
private:
    int real; // Data members
    int imag; //Data members

public:
    void accept() //Member Functions -> Facilitators
    {
        cout << "Enter real and imag values";
        cin >> real >> imag;
    }
    void print() //Member Functions-> Facilitators
    {
        cout << "Real = " << real << endl;
        cout << "Imag = " << imag << endl;
    }
};

int main()
{
    Complex c1; //Object of a class
    c1.accept();
    c1.print();
    return 0;
}