
// lock_guard (std::lock_guard<mutex> lock(m) )  lock-> object & m-> mutex object

// aquire mutex lock the moment you create the object of lock_guard.
// Automatically remove the lock while goes out of scope.
// can't explicitly unlock the lock_guard.
// can't copy lock_guard.

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int buffer = 0;
std::mutex m;

void task(const char* threadNumber, int loop){
    std::lock_guard<mutex> lock(m);             // non-mutex 
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