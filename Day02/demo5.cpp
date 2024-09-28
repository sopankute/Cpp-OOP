#include <iostream>
using namespace std;
void sum(int num1, int num2)
{
    cout << "Addition of 2 int nos = " << num1 + num2 << endl;
}

void sum(int num1, int num2, int num3)
{
    cout << "Addition of 3 int nos = " << num1 + num2 + num3 << endl;
}
void sum(double num1, double num2)
{
    cout << "Addition of 2 double nos = " << num1 + num2 << endl;
}

void sum(int num1, double num2)
{
    cout << "Addition of 1 int and 1 double nos = " << num1 + num2 << endl;
}

void sum(double num1, int num2)
{
    cout << "Addition of 1 int and 1 double nos = " << num1 + num2 << endl;
}

int main()
{
    sum(10, 20);
    sum(10, 20, 30);
    sum(10.20, 20.59);
    sum(10, 20.30);
    sum(10.52, 20);

    return 0;
}