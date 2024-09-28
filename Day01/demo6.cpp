#include <iostream>

//ROI = Rate OF Interest
int ROI = 10;

//SC -> Senior Citizen
namespace SC //any name
{
    int ROI = 15;
}
//Minor
namespace M
{
    int ROI = 8;
}

int main()
{
    printf("Rate of Interest for Person = %d", ROI);
    printf("\nRate of Interest for Senior Citizen = %d", SC::ROI);
    printf("\nRate of Interest for Minorn = %d", M::ROI);

    return 0;
}
