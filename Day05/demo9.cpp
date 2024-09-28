#include <iostream>
using namespace std;

class Arithmetic
{
private:
    int num1;
    int num2;

public:
    Arithmetic(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    void sum()
    {
        cout << "Addition of 2 numbers = " << this->num1 + this->num2 << endl;
    }
    void sub()
    {
        if (this->num1 < this->num2)
            throw 1;
        cout << "Substratcion of 2 numbers = " << this->num1 - this->num2 << endl;
    }

    void div()
    {
        if (this->num2 == 0)
            throw 1.2;
        cout << "Division of 2 numbers = " << this->num1 / this->num2 << endl;
    }
    void mul()
    {
        if (this->num2 == 0 || this->num1 == 0)
            throw 1.5f;
        cout << "Substratcion of 2 numbers = " << this->num1 * this->num2 << endl;
    }
};

int main()
{
    Arithmetic a(0, 20);
    try
    {
        a.sum();
        //a.sub();
        a.div();
        a.mul();
    }
    catch (int i)
    {
        cout << "Substraction is not possible" << endl;
    }
    catch (...)
    {
        cout << "Cannot do their is an error" << endl;
    }

    cout << "Successful Execution" << endl;

    return 0;
}