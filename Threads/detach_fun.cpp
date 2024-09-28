
// detach()
// 1. used to detach newly created thread from parent thread [ main()].
// 2. double detach will result in program termination.


#include<iostream>
using namespace std;
#include<thread>
using namespace std::chrono;

void run(int count){
    while(count-- > 0){
        cout<<"Cpp Proogram  "<<count<<endl;           
    }
    // std::this_thread::sleep_for(chrono::seconds(3));
    cout<<"end of thread"<<endl;                        
}
int main(){
    std::thread T1(run, 10);        
    cout<<"before detach()"<<endl; 
    T1.detach();                    // thread T1 needs to complete task before terminating main()
    cout<<"after detach()"<<endl;
    std::this_thread::sleep_for(chrono::seconds(3));
    return 0;
}

/*
    Till the termination of main() OS process 2 lines in background
        before detach()
        after detach()
        Cpp Proogram  9
        Cpp Proogram  8
*/
/*
    If main() thread wait for 3 sec before termination, OS completed his task within 3 sec
        before detach()
        after detach()
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
*/