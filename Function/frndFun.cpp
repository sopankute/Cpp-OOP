#include<iostream>
using namespace std;

class Base{
    
    int a, b;

    public:
        void setData();
        friend void findMax(Base);
};

void Base::setData(){
    cout<<"Enter the 1st number : ";
    cin>>a;
    cout<<"Enter the 2nd Number : ";
    cin>>b;
}
void findMax(Base l){
    if(l.a > l.b)
        cout<<"Max Number : "<<l.a<<endl;
    else
        cout<<"Max Number : "<<l.a<<endl;
}

int main(){
    Base obj;
    obj.setData();
    findMax(obj);
    return 0;
}