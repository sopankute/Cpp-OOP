#include <iostream>
#include "complex.h"
using namespace std;
int main()
{
    cout << "Inside main" << endl;
    Complex c1;
    c1.printComplex();
    Complex c2(100, 200);
    c2.printComplex();
    return 0;
}
//g++ .\complex.cpp .\main.cpp