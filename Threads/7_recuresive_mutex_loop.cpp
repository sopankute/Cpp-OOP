
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

std::recursive_mutex rm;

int main(){
    for(int i=0; i<5; i++){
        rm.lock();
        cout<<"Locked "<<i<<endl;
    }
    for(int i=0; i<5; i++){
        rm.unlock();
        cout<<"UnLocked "<<i<<endl;
    }
    return 0;
}