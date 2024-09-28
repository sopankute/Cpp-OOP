#include<iostream>
using namespace std;

int const& max(int const& x, int const& y){
    cout<<"max(int, int)"<<endl;
    return x < y ? x : y;
}

template <typename T>
T const& max(T const& x, T const& y){
    cout<<"max(T,T)"<<endl;
    return x < y ? x : y;
}

template<typename T>
T const& max(T const& x, T const& y, T const& z){
    cout<<"max(T, T, T)"<<endl;
    return max(max(x,y),y);
}

int main(){
    ::max(10.0, 20.0);          // max(T,T)
    ::max('s', 'j');            // max(T,T)
    ::max(10, 20);              // max(int, int)
    ::max<>(10, 20);            // max(T,T)
    ::max<double>(10, 20);      // max(T,T)
    ::max<>(10, 20, 30);        // max(int, int)  // max(int, int)
   
    return 0;
}