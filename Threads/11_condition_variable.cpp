
// Condition Variable
// purpose 1. Notify other thread   2. Waiting for some conditions
// 1. notify_one();
// 2. notify_all();


#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
using namespace std;

std::condition_variable cv;
std::mutex m;
long balance = 0;

void addMoney(int money){
    std::lock_guard<mutex> lg(m);
    balance += money;
    cout<<"Amount added current balance : "<<balance<<endl;
    cv.notify_one();
}
void withdrawMoney(int money){
    std::unique_lock<mutex> ul(m);
    cv.wait(ul, []{return (balance!= 0) ? true : false;});
    if(balance>=money){
        balance -= money;
        cout<<"Amount deducted : "<<money<<endl;
    }else{
        cout<<"Current balance is less than "<<money<<endl;
    }
    cout<<"Current balance is "<<balance<<endl;
}
int main(){
    std::thread T1(withdrawMoney, 500);
    std::thread T2(addMoney, 500);
    T1.join();
    T2.join();
    return 0;
}