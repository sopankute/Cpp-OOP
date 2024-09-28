#include<iostream>
using namespace std;

class Vehicle{
    public :
        void driveVehicle(){
            cout<<"Driving..."<<endl;
        }
};
class Car : public Vehicle{
    public :
        void getTyres(){
            cout<<"Car has four Tyres"<<endl;
        }
};

int main(){
    // Is-A relationship
    Car C;
    C.driveVehicle();
    C.getTyres();
    return 0;
}