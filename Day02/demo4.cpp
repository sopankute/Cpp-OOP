#include <iostream>
using namespace std;

inline void sum(int num1, int num2)
{
    cout << "Addition of 2 nos = " << num1 + num2;
}

int main()
{
    sum(10, 20); //cout << "Addition of 2 nos = " << 10 + 20;
    cout << "\nBack in main";
    return 0;
}
