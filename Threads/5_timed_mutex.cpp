
// Timed Mutex (std::timed_mutex)


#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>
using namespace std;

int myAmount = 0;
std::timed_mutex m;

void increament(int i){
    auto now = std::chrono::steady_clock::now();
    if(m.try_lock_until(now + std::chrono::seconds(2))){
        ++myAmount;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout<<"Thread "<<i<<" entered"<<endl;
        m.unlock();
    }else{
        cout<<"Thread "<<i<<" couldn't entered"<<endl;
    }
}

int main(){
    std::thread T1(increament, 1);
    std::thread T2(increament, 2);
    T1.join();
    T2.join();
    cout<<"my amount : "<<myAmount<<endl;
    return 0;
}

/*
    1. try_lock_for 1 sec and sleep_for 2 sec
        Thread 2 couldn't entered
        Thread 1 entered
        my amount : 1

    2. try_lock_for 2 sec and sleep_for 1 sec AND both thread got chance to update the amount
        Thread 1 entered
        Thread 2 entered
        My amount : 2
*/