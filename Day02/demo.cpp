#include <iostream>

int num1 = 10; // global namespace

namespace na
{
    int num1 = 100;
    int num2 = 200;
    namespace na1
    {
        int num1 = 500;
        int num2 = 600;
    }
}

using namespace na;
int main()
{
    printf("Value of num1 from global = %d", ::num1);

    printf("\nValue of num1 from na = %d", na::num1);
    printf("\nValue of num2 from na = %d", num2);

    printf("\nValue of num1 from na1 = %d", na1::num1);
    printf("\nValue of num2 from na1 = %d", na1::num2);

    return 0;
}