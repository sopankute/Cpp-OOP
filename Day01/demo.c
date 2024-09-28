#include <stdio.h>

void sum(int num1, int num2)
{
    int result = num1 + num2;
    printf("Addition = %d", num1 + num2); //result
}

int main()
{
    sum(10, 20); // 30
    return 0;
}