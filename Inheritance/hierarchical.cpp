#include<iostream>
using namespace std;

class Human{
    public : 
        void breathing(){
            cout<<"Human Breath..."<<endl;
        }
};
class Youtuber : public Human{
    public : 
        void work(){
            cout<<"Creating Videos..."<<endl;
        }
};
class Engineer : public Human{
    public : 
        void work(){
            cout<<"Building machine..."<<endl;
        }
};
class Doctor : public Human{
    public : 
        void work(){
            cout<<"Saving lives..."<<endl;
        }
};
int main(){
    Youtuber y;
    y.breathing();  // Human Breath...
    y.work();       // Creating Videos...
    Engineer e;
    e.breathing();  // Human Breath...
    e.work();       // Building machine...
    Doctor d;
    d.breathing();  // Human Breath...
    d.work();       // Saving lives...

    Human * h = new Youtuber();     // Dynamic Binding
    h->breathing();         // Human Breath...
    // h->work();              // class "Human" has no member "work"

    return 0;
}