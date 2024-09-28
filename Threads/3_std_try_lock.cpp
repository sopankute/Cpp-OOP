//            -1  0   1   2   3   N
// std::try_lock(m1, m2, m3, m4, mN);
// 1. Tries to lock all locable objects passed in it 1 by 1 in given order.
// 2. on Success returns -1 otherwise it returns 0 or based on mutex index.(m3 failed return 2)
// 3. if it fials to lock any mutex then it'll release all the mutex it locked before.

#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;

int x = 0, y = 0;
std::mutex m1, m2;

void doSomething(int seconds){
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}
void increamentXY(int& xory, std::mutex& m, const char* str){
    for(int i=0; i<5; ++i){
        m.lock();
        ++xory;
        cout<<str<<xory<<'\n';
        m.unlock();
        doSomething(1);
    }
}
void getXY(){
    int count = 5;
    int sumOfxy = 0;
    while(1){
        int lockResult = std::try_lock(m1, m2);
        if(lockResult == -1){
            if(x!=0 && y!=0){
                --count;
                sumOfxy += (x+y);
                x=0;
                y=0;
                cout<<"sum of XY : "<<sumOfxy<<endl;
            }
            m1.unlock();
            m2.unlock();
            if(count==0) break;
        } 
    }
}

int main(){
   std::thread T1(increamentXY, std::ref(x), std::ref(m1), "X : ");
   std::thread T2(increamentXY, std::ref(y), std::ref(m2), "Y : ");
   std::thread T3(getXY);

   T1.join();
   T2.join();
   T3.join();
   return 0;
}