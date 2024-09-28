#include <iostream>
using namespace std;

int main()
{
    int num1 = 20;
    int *ptr = &num1;
    cout << "Value of num1 = " << num1 << endl;
    cout << "Value of num1 using ptr = " << *ptr << endl;
    *ptr = 40;
    int &ref = num1;
    cout << "Value of num1 = " << num1 << endl;
    cout << "Value of num1 using ref = " << ref << endl;
    ref = 50;
    cout << "Addresses=" << endl;
    cout << "Address of num1 = " << &num1 << endl;
    cout << "Address of ptr = " << &ptr << endl;
    cout << "Address of ref = " << &ref << endl;
}