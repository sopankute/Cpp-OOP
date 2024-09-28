#include <iostream>
using namespace std;
void sum(int num1, int num2);

int main()
{
    sum(10, 20);
    return 0;
}

void sum(int num1, int num2)
{
    cout << "Addition of 2 nos = " << num1 + num2;
}