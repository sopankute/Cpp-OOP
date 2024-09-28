
// Timed Mutex (std::timed_mutex)
// 1. it's blockd till timeout or lock is aquired and returns true if success.
// Member function
// 1. lock()
// 2. unlock()
// 3. try_lock()
// 4. try_lock_for()
// 5. try_lock_until()

#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>
using namespace std;

int myAmount = 0;
std::timed_mutex m;

void increament(int i){
    if(m.try_lock_for(std::chrono::seconds(2))){
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
    cout<<"My amount : "<<myAmount<<endl;
    return 0;
}
/*
    1. try_lock_for 1 sec and sleep_for 2 sec
        Thread 1 couldn't entered
        Thread 2 entered
        My amount : 1

    2. try_lock_for 2 sec and sleep_for 1 sec AND both thread got chance to update the amount
        Thread 1 entered
        Thread 2 entered
        My amount : 2
*/