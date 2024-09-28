
// join() 

//JOIN Notes
// 1. Once a Thread started we wait for this thread to finish by calling join() function on thread object(T1)
// 2. double join will result in program termination.
// 3. using joinable(), can chect whether the thread is Joined or Not.

#include<iostream>
using namespace std;
#include<thread>
using namespace std::chrono;

void run(int count){
    while(count-- > 0){
        cout<<"Cpp Proogram  "<<count<<endl;           // 3
    }
    std::this_thread::sleep_for(chrono::seconds(3));
    cout<<"end of thread"<<endl;                        // 4
}
int main(){
    cout<<"before calling thread..."<<endl;     // 1
    std::thread T1(run, 10);                    //   thread started on background
    cout<<"before join()"<<endl;                // 2
    T1.join();                                  //   thread completed (3 & 4)
    // T1.join();                      // terminate called after throwing an instance of 'std::system_error'
    if(T1.joinable())
        T1.join();                      // terminate called after throwing an instance of 'std::system_error'
    cout<<"after join()"<<endl;                 // 5
    
    
    return 0;
}

/*
before calling thread...
before join()
Cpp Proogram  9
Cpp Proogram  8
Cpp Proogram  7
Cpp Proogram  6
Cpp Proogram  5
Cpp Proogram  4
Cpp Proogram  3
Cpp Proogram  2
Cpp Proogram  1
Cpp Proogram  0
end of thread
after join()
*/