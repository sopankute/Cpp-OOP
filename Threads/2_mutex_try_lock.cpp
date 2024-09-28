
// std::mutex::try_lock()
// 1. it's try tolock mutex. returns immediately. on Success return True else False.
// 2. if its not able lock mutex, then it doesn't get blocked that's why its called Non-Blocking.

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int count = 0;
std::mutex m;

void increaseTheCount(){
    for(int i=0; i<1000000; i++){
        if(m.try_lock()){
            ++count;
            m.unlock();
        }
    }
}
int main(){
    std::thread T1(increaseTheCount);
    std::thread T2(increaseTheCount);
    T1.join();
    T2.join();

    cout<<"final increased counter value : "<<count<<endl;      // 1051007 every time got different output
    return 0;
}