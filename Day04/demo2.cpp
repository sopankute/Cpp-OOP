#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;
    *ptr = 20;
    cout << "Address of ptr = " << &ptr << endl;
    cout << "Address of dynmic memory = " << ptr << endl;
    cout << "Value at that memory = " << *ptr << endl;
    delete ptr;
    ptr = NULL;
    return 0;
}