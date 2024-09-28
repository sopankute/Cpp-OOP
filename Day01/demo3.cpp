#include <iostream>

int main()
{
    wchar_t name = L'A';
    printf("Value of flag = %c", name);
    printf("\nSize of flag = %d", sizeof(name));
    //1 byte = 2 power of 8  = 256 -> A-Z , a-Z , 0-9,
    //2 bytes = 2 power of 16 = 65536
    return 0;
}