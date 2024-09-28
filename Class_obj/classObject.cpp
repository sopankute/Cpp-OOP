#include<iostream>
using namespace std;

class Phone{
    string p_name;
    string p_color;
    public :

        Phone(string name, string color){
            p_name = name;
            p_color = color;
        }
        void makeCall(){
            cout<<"Making Call using "<<p_name<<endl;
        }
        void receiveCall(){
            cout<<"Receiving call using "<<p_name<<endl;
        }
};

int main(){
    Phone iPhone("Iphone 15 pro","Yellow");
    iPhone.makeCall();
    iPhone.receiveCall();
    // cout<<"The model color : "<<iPhone.p_color<<endl;   // private member

    cout<<endl;

    Phone gPixel("Google Pixel 8 pro","White");
    gPixel.makeCall();
    gPixel.receiveCall();

    return 0;
}