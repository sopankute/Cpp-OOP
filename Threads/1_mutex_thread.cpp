
// Mutex (Mutual Exclusion)

// Race Condition
// 1. in which 2 or more threads/process trying to change a common data at the same time.
// 2. where the race condition is protected that section is called critical section. 
// 3. mutex used to avoid race condition.
// 4. lock() & unLock used in mutex.

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int myAmount = 0;
std::mutex m;

 void addMoney(){
   m.lock();      
   ++myAmount;
   m.unlock();
 }

 int main(){
    std::thread T1(addMoney);
    std::thread T2(addMoney);

    T1.join();
    T2.join();

    cout<<myAmount<<endl;     // 2
    return 0;
 }


