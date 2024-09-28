

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int buffer = 0;
std::mutex m;

void task(const char* threadNumber, int loop){
    std::unique_lock<mutex> x(m, std::defer_lock);   // doesn't call lock on mutex, coz of using 'defer_lock'                                           
    // can have some code here then you can implement lock
    x.lock();                           // needs to lock explicitly
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