#include<iostream>
using namespace std;

// Heirarchical + Multiple = Hybrid Inheriatnce

class Student{
    public :
        void studying(){
            cout<<"Student Studyng..."<<endl;
        }
};
class Male{
    public :
        void gender(){
            cout<<"I'm Male..."<<endl;
        }
};
class Female{
    public :
        void gender(){
            cout<<"I'm Female..."<<endl;
        }
};
class Boy : public Student, public Male{

};
class Girl : public Student, public Female{

};

int main(){

    Boy ram;
    ram.studying();     // Student Studyng...
    ram.gender();       // I'm Male...
    Girl sita;
    sita.studying();    // Student Studyng...
    sita.gender();      // I'm Female...

    return 0;
}