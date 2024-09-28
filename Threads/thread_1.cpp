/*
    Threads
    1. Every Application default thread is known as main() thread.
    2. lightwaight proccess. can divide process into multple thread.

    Ways to create multiple threads.
        1. Function Pointer
        2. Lamda Function
        3. Functors
        4. Member Function
        5. Static Function
*/

#include<iostream>
#include<thread>
// #include<chrono>
using namespace std;
using namespace std :: chrono;

typedef unsigned long long ull;
ull evenSum = 0;
ull oddSum = 0;

void findEven(ull start, ull end){
    for(ull i=0; i<=end; i++){
        if((i & 1) == 0){
            evenSum += i;
        }
    }
}
void findOdd(ull start, ull end){
    for(ull i=0; i<=end; i++){
        if((i & 1) == 1)
            oddSum += i;
    }
}
int main(){
    ull start = 0, end = 1900000000;

    auto startTime = high_resolution_clock::now();

    // Threads
    thread t1(findEven, start, end);
    thread t2(findOdd, start, end);

    t1.join();
    t2.join();
        // findEven(start, end);
        // findOdd(start, end);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime-startTime);

    cout<<"Even Sum : "<<evenSum<<endl;
    cout<<"Odd Sum : "<<oddSum<<endl;
    cout<<"Seconds : "<<duration.count()/1000000<<endl;

    return 0;
}

// g++ -std=c++11 -pthread CPP/Udemy/Cpp/Threads/thread_1.cpp