#include <iostream>
//i am going to input hrs,min and sec and display me in this format - hr:min:sec

struct Time
{
private:
    int hr;
    int min;
    int sec;

public:
    void acceptTime()
    {
        printf("Enter hr = ");
        scanf("%d", &hr);
        printf("Enter min = ");
        scanf("%d", &min);
        printf("Enter sec = ");
        scanf("%d", &sec);
    }
    void printTime()
    {
        printf("Time = %d:%d:%d", hr, min, sec);
    }
};

int main()
{
    struct Time t;
    t.acceptTime();
    //t.hr = 20; //cannot do this in cpp as the structure data members are private
    t.printTime();
    return 0;
}