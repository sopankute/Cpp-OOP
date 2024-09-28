#include <iostream>

int num1 = 10;

namespace na
{
    int num1 = 20;
    namespace na2
    {
        int num1 = 200;
    }
}

namespace nb
{
    int num1 = 30;
}

int main()
{
    printf("Value of num1 = %d", num1);
    printf("\nValue of num1 from na = %d", na::num1);
    printf("\nValue of num1 from nb= %d", nb::num1);
    printf("\nValue of num1 from na2= %d", na::na2::num1);

    return 0;
}
