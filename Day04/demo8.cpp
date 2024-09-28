#include <iostream>
using namespace std;

template <typename R, typename P>
void sum(R num1, P num2)
{
    cout << "Addition = " << num1 + num2 << endl;
}

int main()
{
    sum(10, 20.20);
    sum(10.56, 20.25);
    sum(10.5f, 20.35f);
}