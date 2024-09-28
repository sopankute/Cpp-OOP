
// Recursive Mutex (std::recursive_mutex)
// 1. It's same as Mutex but same thread can lock one mutex multiple times using recursive_mutex.
// 2. recursive_mutex keeps count how many times it was locked so that many time it should be unlocked.
// 3. it can be used in loop also.

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int buffer = 0;
std::recursive_mutex rm;

void recursion(char c, int looptime){
    if(looptime<0)
        return;

    rm.lock();
    cout<<c<<"  "<<buffer++<<endl;
    recursion(c, --looptime);
    rm.unlock();
}
int main(){
    std::thread T1(recursion,'1', 10);
    std::thread T2(recursion,'2', 10);
    T1.join();
    T2.join();
    return 0;
}