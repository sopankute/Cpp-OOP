
// unique_lock(std::unique_lock<mutex> lock(m))
    //1. class unique_lock is mutex ownership wrapper.
    //2. can have different locking stratagies.
    //3. time constraint attempts at locking (try_lock_for,try_lock_until).
    //4. recursive locking.
    //5. transefer of lock ownership.(move not copy)
    //6. condition variable
// locking stratagies
    //1. differ_lock    don't aquire ownership of mutex.
    //2. try_to_lock    try to aquire ownership of mutex without blocking.
    //3. adopt_lock     it assume caling thread already has ownership of mutex. 

    
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int buffer = 0;
std::mutex m;

void task(const char* threadNumber, int loop){
    std::unique_lock<mutex> lock(m);             // non-mutex 
                                                 // automatically lock and unlock at time of loop termination 
    // m.lock();
        for(int i=0; i<loop; ++i){
            buffer++;
            cout<<threadNumber<<" "<<buffer<<endl;
        }
        cout<<endl;
    // m.unlock();
}
int main(){
    std::thread T1(task, "T1 ", 5);
    std::thread T2(task, "T2 ", 5);
    T1.join();
    T2.join();
    return 0;
}