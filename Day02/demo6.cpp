#include <iostream>
using namespace std;
//Deafult argument function

void sum(int num1, int num2, int num3 = 0, int num4 = 0)
{
    cout << "Addition of nos = " << num1 + num2 + num3 + num4 << endl;
}

int main()
{
    sum(10, 20);         //30
    sum(10, 20, 30);     //60
    sum(10, 20, 30, 40); //100

    return 0;
}