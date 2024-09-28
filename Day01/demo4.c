#include <stdio.h>
//i am going to input hrs,min and sec and display me in this format - hr:min:sec

struct Time
{
    int hr;
    int min;
    int sec;
};

void acceptTime(struct Time *t)
{
    printf("Enter hr = ");
    scanf("%d", &t->hr);
    printf("Enter min = ");
    scanf("%d", &t->min);
    printf("Enter sec = ");
    scanf("%d", &t->sec);
}

void printTime(struct Time t)
{
    printf("Time = %d:%d:%d", t.hr, t.min, t.sec);
}

int main()
{
    struct Time t;
    acceptTime(&t);
    t.hr = 20;
    printTime(t);
    return 0;
}