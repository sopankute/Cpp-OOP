#include<iostream>
using namespace std;

class Testclass{
    int x;          // bydefault private
};

class X : Testclass{}; // bydefault private inheriatnce

struct Teststruct{
    int x;          // bydefault public
};

struct Y : Teststruct{}; // bydefault private inheriatnce

int main(){
    return 0;
}
